/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:21:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 15:17:48 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Joe");
	ClapTrap	player1_cpy(player1);
	ClapTrap	player2("Eduardo");
	ClapTrap	player3("Sylvain");

	player1.attack("Combat dummy");
	player1_cpy.attack("Combat dummy for copy");
	player2.attack("Combat dummy");
	player3.attack("Combat dummy");
	player1.takeDamage(5);
	player1_cpy.takeDamage(5);
	player2.takeDamage(3);
	player3.takeDamage(15);
	player1.beRepaired(3);
	player1_cpy.beRepaired(5);
	player2.beRepaired(5);
	player3.beRepaired(3);

	return (0);
}
