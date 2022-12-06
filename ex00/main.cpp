#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Joe");
	
	player1.attack("Bob");
	player1.beRepaired(1);
	player1.takeDamage(5);
	player1.beRepaired(3);
	player1.attack("Bob");

	return (0);
}
