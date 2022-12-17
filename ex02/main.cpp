/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 09:48:55 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Joe");
	ScavTrap	player2("Eduardo");
	FragTrap	player3("Arthur");

	player1.attack("Combat dummy");
	player2.attack("Combat dummy");
	player3.attack("Combat dummy");
	player1.takeDamage(5);
	player2.takeDamage(20);
	player3.takeDamage(30);
	FragTrap	player4(player3);
	player4.takeDamage(2);
	player1.beRepaired(3);
	player2.beRepaired(30);
	player3.beRepaired(25);
	player2.takeDamage(5);
	player2.guardGate();
	player3.highFiveGuys();

	return (0);
}
