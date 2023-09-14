#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap {
	public:
		// Othodox Canonical Form
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap&	operator=( const ClapTrap& copy );
		~ClapTrap( void );

		// Getters
		std::string		getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		// Setters
		void		setName( std::string newName );
		void		setHitPoints( unsigned int newHitPoints );
		void		setEnergyPoints( unsigned int newEnergyPoints );
		void		setAttackDamage( unsigned int newAttackDamage );
		
		// Member functions
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
