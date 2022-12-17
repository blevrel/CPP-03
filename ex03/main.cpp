/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 10:07:58 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Max");
	ScavTrap	player2("Emma");
	FragTrap	player3("Mary");
	DiamondTrap	player4("Volodymyr");

	player1.attack("Combat dummy");
	player2.attack("Combat dummy");
	player3.attack("Combat dummy");
	player4.attack("Combat dummy");
	player1.takeDamage(5);
	player2.takeDamage(20);
	player3.takeDamage(30);
	player4.takeDamage(30);
	player1.beRepaired(3);
	player2.beRepaired(30);
	player3.beRepaired(25);
	player2.takeDamage(5);
	player2.guardGate();
	player4.highFiveGuys();
	player4.whoAmI();

	return (0);
}
