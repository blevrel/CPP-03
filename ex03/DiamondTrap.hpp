/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:21:05 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/07 13:52:05 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{

private:

	std::string	name;

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	~DiamondTrap(void);
	DiamondTrap& operator=(const DiamondTrap& other);
	void	whoAmI(void);
	void	attack(const std::string& target);

};

#endif
