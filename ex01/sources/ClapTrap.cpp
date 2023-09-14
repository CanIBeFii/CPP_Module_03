#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ) {
	std::cout << "ClapTrap Parameter Constructor called" << std::endl;

	setHitPoints( 10 );
	setEnergyPoints( 10 );
	setAttackDamage( 0 );
}

ClapTrap::ClapTrap( const ClapTrap& copy ) {
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	//*this = copy;
	setName( copy.getName() );
	setHitPoints( copy.getHitPoints() );
	setEnergyPoints( copy.getEnergyPoints() );
	setAttackDamage( copy.getAttackDamage() );
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy ) {
	std::cout << "ClapTrap Assignation Operator called" << std::endl;
	
	if ( this != &copy ) {
		setName( copy.getName() );
		setHitPoints( copy.getHitPoints() );
		setEnergyPoints( copy.getEnergyPoints() );
		setAttackDamage( copy.getAttackDamage() );
	}

	return ( *this );
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

// Getters

std::string	ClapTrap::getName( void ) const {
	return ( _name );
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return ( _hitPoints );
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return ( _energyPoints );
}

unsigned int	ClapTrap::getAttackDamage( void ) const {
	return ( _attackDamage );
}

// Setters

void	ClapTrap::setName( std::string newName ) {
	_name = newName;
}

void	ClapTrap::setHitPoints( unsigned int newHitPoints ) {
	_hitPoints = newHitPoints;
}

void	ClapTrap::setEnergyPoints( unsigned int newEnergyPoints ) {
	_energyPoints = newEnergyPoints;
}

void	ClapTrap::setAttackDamage( unsigned int newAttackDamage ) {
	_attackDamage = newAttackDamage;
}

// Member functions

void	ClapTrap::attack( const std::string& target ) {
	if ( _energyPoints < _attackDamage ) {
		std::cout << "ClapTrap " << _name << " has not enough energy points to attack ";
		std::cout << target << "!" << std::endl;
		return ;
	}
	

	_energyPoints -= _attackDamage;

	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( _hitPoints < amount) {
		_hitPoints = 0;
	}
	else {
		_hitPoints -= amount;
	}
	
	std::cout << "ClapTrap " << _name << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if ( _energyPoints < amount ) {
		std::cout << "ClapTrap " << _name << " has not enough energy points to be repaired by ";
		std::cout << amount << " number of hit points" << std::endl;
		return ;
	}

	_hitPoints += amount;
	_energyPoints -= amount;

	std::cout << "ClapTrap " << _name << " is repaired by ";
	std::cout << amount << " points!" << std::endl;
}