#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Parameter Constructor called" << std::endl;

	setHitPoints( 100 );
	setEnergyPoints( 50 );
	setAttackDamage( 20 );
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap( copy ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Copy Constructor called" << std::endl;
	//*this = copy;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Assignation Operator called" << std::endl;
	
	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

ScavTrap::~ScavTrap( void ) {
	std::cout << BOLDGREEN << "ScavTrap: " << RESET;
	std::cout << "Destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if ( _energyPoints < _attackDamage ) {
		std::cout << "ClapTrap " << this->_name << " has not enough energy points to attack ";
		std::cout << target << "!" << std::endl;
		return ;
	}

	_energyPoints -= _attackDamage;

	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	std::cout << "Yes they are that much talented :3" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << _name << " is guarding the gate!!" << std::endl;
}
