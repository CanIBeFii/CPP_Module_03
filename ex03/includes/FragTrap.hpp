#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& copy );
		FragTrap&	operator=( const FragTrap& copy );
		virtual ~FragTrap( void );

		// Functions
		void	highFivesGuys( void );
};

#endif