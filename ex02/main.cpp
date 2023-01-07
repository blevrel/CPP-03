/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:11 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/07 13:42:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

int	main(void)
{
	//Different constructors are called
	FragTrap	player1("Joe");
	FragTrap	player1_cpy(player1);
	FragTrap	player2("Eduardo");
	FragTrap	player2_cpy;
	FragTrap	player3("Sylvia");

	//Assignment operator called
	player2_cpy = player2;

	//Various usage of methods to show all features
	player1.attack("Combat dummy");
	player1_cpy.attack("Combat dummy for Joe copy");
	player2.attack("Combat dummy");
	player2_cpy.attack("Combat dummy for Eduardo copy");
	player3.attack("Combat dummy");
	player1.takeDamage(5);
	player1_cpy.takeDamage(5);
	player2.takeDamage(3);
	player2_cpy.takeDamage(5);
	player3.takeDamage(150);
	player1.beRepaired(3);
	player1_cpy.beRepaired(5);
	player2.beRepaired(5);
	player2_cpy.beRepaired(10);
	player3.beRepaired(3);
	for (int i = 0; i < 48; i++)
		player3.attack("Combat dummy");
	player3.attack("Combat dummy");
	player3.beRepaired(10);
	player3.highFivesGuys();

	return (0);
}
