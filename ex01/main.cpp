/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 09:41:16 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Joe");
	ScavTrap	player2("Eduardo");
	ScavTrap	player3(player2);

	player1.attack("Combat dummy");
	player2.attack("Combat dummy");
	player3.attack("Combat dummy");
	player1.takeDamage(5);
	player2.takeDamage(3);
	player3.takeDamage(3);
	player1.beRepaired(3);
	player2.beRepaired(5);
	player3.beRepaired(5);
	player2.takeDamage(5);
	player3.guardGate();

	return (0);
}
