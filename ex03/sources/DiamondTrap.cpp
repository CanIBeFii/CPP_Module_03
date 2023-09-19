#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << BOLDGREEN << "DiamondTrap: " << RESET;
	std::cout << "Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" ),
		ScavTrap(), FragTrap(), _name( name ) {
	std::cout << BOLDGREEN << "DiamondTrap: " << RESET;
	std::cout << "Parameter Constructor called" << std::endl;
	
	setHitPoints( 100 );
	setEnergyPoints( 50 );
	setAttackDamage( 30 );
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap( copy ),
		ScavTrap(), FragTrap() {
	std::cout << BOLDGREEN << "DiamondTrap: " << RESET;
	std::cout << "Copy Constructor called" << std::endl;
	//*this = copy;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy ) {
	std::cout << BOLDGREEN << "DiamondTrap: " << RESET;
	std::cout << "Assignation Operator called" << std::endl;
	
	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << BOLDGREEN << "DiamondTrap: " << RESET;
	std::cout << "Destructor called" << std::endl;
}

// Getters

std::string DiamondTrap::getName( void ) const {
	return ( _name );
}

// Setters

void	DiamondTrap::setName( const std::string& name ) {
	_name = name;
}

// Functions

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << _name << " and my ClapTrap name is ";
	std::cout << ClapTrap::_name << std::endl;
}