/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:20:41 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/07 13:39:51 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	:	ClapTrap("Default_name_clap_name")
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
	:	ClapTrap(_name + "_clap_name"),
		ScavTrap(_name),
		FragTrap(_name)
{
	this->name = _name;
	this->save_hit_pts = 100;
	this->hit_pts = 100;
	this->nrg_pts = 50;
	this->atk_dmg = 30;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	:	ClapTrap(other),
		ScavTrap(other),
		FragTrap(other)
{
	this->name = other.getName();
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	this->name = other.getName();
	this->save_hit_pts = other.getSaveHitPts();
	this->hit_pts = other.getHitPts();
	this->nrg_pts = other.getNrgPts();
	this->atk_dmg = other.getAtkDmg();
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My ClapTrap name is: " << ClapTrap::name << ". My own name is: " << this->name + "." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
