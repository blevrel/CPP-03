/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:15 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 09:43:02 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "Default_name";
	this->save_hit_pts = 100;
	this->hit_pts = 100;
	this->nrg_pts = 50;
	this->atk_dmg = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
	: ClapTrap(_name)
{
	this->save_hit_pts = 100;
	this->hit_pts = 100;
	this->nrg_pts = 50;
	this->atk_dmg = 20;
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other)
	:	ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << ScavTrap::name << " is now in gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_pts > 0)
	{
		if (this->nrg_pts == 0)
		{
			std::cout << this->getName() << " has no more energy points and can't use its stick." << std::endl;
			return ;
		}
		this->nrg_pts--;
		std::cout << this->getName() << " hits "
		<< target << " with a stick causing " << this->getAtkDmg()
		<< " damages !" << std::endl;
	}
	else
		std::cout << this->getName() << " is dead and can't attack." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.getName();
	this->save_hit_pts = other.getSaveHitPts();
	this->hit_pts = other.getHitPts();
	this->nrg_pts = other.getNrgPts();
	this->atk_dmg = other.getAtkDmg();
	return (*this);
}
