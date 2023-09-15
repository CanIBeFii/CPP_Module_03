#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		// Orthodox Canonical Form
		DiamondTrap( void );
		DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap& copy );
		DiamondTrap&	operator=( const DiamondTrap& copy );
		~DiamondTrap( void );

		// Getters
		std::string	getName( void ) const;

		// Setters
		void		setName( const std::string& name );
		
		// Functions
		void		whoAmI( void );
	
	private:
		std::string	_name;
};

#endif