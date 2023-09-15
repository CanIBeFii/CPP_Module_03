#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap {
	public:
		// Othodox Canonical Form
		ClapTrap( void );
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap&	operator=( const ClapTrap& copy );
		~ClapTrap( void );

		// Getters
		std::string		getName( void ) const;
		uint	getHitPoints( void ) const;
		uint	getEnergyPoints( void ) const;
		uint	getAttackDamage( void ) const;

		// Setters
		void		setName( const std::string& newName );
		void		setHitPoints( const uint newHitPoints );
		void		setEnergyPoints( const uint newEnergyPoints );
		void		setAttackDamage( const uint newAttackDamage );
		
		// Functions
		void		attack( const std::string& target );
		void		takeDamage( uint amount );
		void		beRepaired( uint amount );

	protected:
		std::string		_name;
		uint	_hitPoints;
		uint	_energyPoints;
		uint	_attackDamage;
};

#endif
