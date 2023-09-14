#include "ScavTrap.hpp"

int	main( void ) {
	{
		ClapTrap	bob( "bob" );

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points and ";
		std::cout << bob.getAttackDamage() << " attack damage" << std::endl;
		bob.attack( "target" );
		bob.takeDamage( 5 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points" << std::endl;
		bob.beRepaired( 10 );
		bob.attack( "target" );
		bob.takeDamage( 100 );
		bob.beRepaired( 100 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points" << std::endl;
	}
	{
		ScavTrap	bob( "bob" );

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points and ";
		std::cout << bob.getAttackDamage() << " attack damage" << std::endl;
		bob.attack( "target" );
		bob.takeDamage( 5 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points" << std::endl;
		bob.beRepaired( 10 );
		bob.attack( "target" );
		bob.takeDamage( 100 );
		bob.beRepaired( 100 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points" << std::endl;
	}

	return ( 0 );
}
