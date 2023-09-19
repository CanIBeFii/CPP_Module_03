#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Othodox Canonical Form
		ScavTrap( void );
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap&	operator=( const ScavTrap& copy );
		~ScavTrap( void );

		// Functions
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
