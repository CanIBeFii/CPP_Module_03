#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		// Othodox Canonical Form
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap&	operator=( const ScavTrap& copy );
		~ScavTrap( void );

		// Functions
		void		attack( const std::string& target );
		void		guardGate( void );
};

#endif
