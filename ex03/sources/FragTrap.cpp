#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap( copy ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& copy ) {
	std::cout << "FragTrap Assignation operator called" << std::endl;

	if ( this != &copy ) {
		this->ClapTrap::operator=( copy );
	}
	return ( *this );
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Deconstructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << _name << " is requesting a high five?" << std::endl;
	std::cout << "Please don't leave him hanging :'(" << std::endl;
}
