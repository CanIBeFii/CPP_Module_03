#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name ) :
		ClapTrap( name + "_clap_name", 100, 50, 30 ), ScavTrap(), FragTrap(), _name( name ) {
	std::cout << "DiamondTrap Parameter Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap( copy ),
		ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	//*this = copy;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy ) {
	std::cout << "DiamondTrap Assignation Operator called" << std::endl;
	
	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap Deconstructor called" << std::endl;
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