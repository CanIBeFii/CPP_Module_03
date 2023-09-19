#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Default Constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Parameter Constructor called" << std::endl;

	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap( copy ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Copy Constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& copy ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Assignation Operator called" << std::endl;

	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

FragTrap::~FragTrap( void ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << _name << " is requesting a high five?" << std::endl;
	std::cout << "Please don't leave him hanging :'(" << std::endl;
}
