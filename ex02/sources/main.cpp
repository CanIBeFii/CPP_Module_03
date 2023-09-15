#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
		ScavTrap	bob( "Scav bob" );

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points and ";
		std::cout << bob.getAttackDamage() << " attack damage" << std::endl;
		bob.attack( "target" );
		bob.takeDamage( 5 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points" << std::endl;
		bob.beRepaired( 10 );
		bob.attack( "target" );

		std::cout << std::endl;
		bob.takeDamage( 100 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points." << std::endl;		
		bob.beRepaired( 100 );
		std::cout << std::endl;

		std::cout << std::endl;
		bob.guardGate();
		std::cout << std::endl;

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points" << std::endl;
	}
	{
		FragTrap	bob( "Frag bob" );

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " energy points and ";
		std::cout << bob.getAttackDamage() << " attack damage" << std::endl << std::endl;

		bob.attack( "enemy" );
		bob.takeDamage( 50 );
		std::cout << std::endl;

		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points ";
		std::cout << bob.getEnergyPoints() << " number of energy points" << std::endl;

		bob.highFivesGuys();
		std::cout << std::endl;
		bob.takeDamage( 100 );
		std::cout << bob.getName() << " has " << bob.getHitPoints() << " hit points." << std::endl;		
		bob.beRepaired( 100 );
		std::cout << std::endl;
		bob.highFivesGuys();
	}
	return ( 0 );
}
