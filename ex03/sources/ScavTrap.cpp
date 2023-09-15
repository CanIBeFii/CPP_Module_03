#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20 ) {
	std::cout << "ScavTrap Parameter Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap( copy ) {
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	//*this = copy;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy ) {
	std::cout << "ScavTrap Assignation Operator called" << std::endl;
	
	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap Deconstructor called" << std::endl;
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
