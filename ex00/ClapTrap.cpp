/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:39:10 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/06 18:18:39 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
	:	name(_name),
		save_hit_pts(10),
		hit_pts(10),
		nrg_pts(10),
		atk_dmg(0)
{
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(void)
	:	name("Default_name"),
		save_hit_pts(10),
		hit_pts(10), 
		nrg_pts(10),
		atk_dmg(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	:	name(other.getName()),
		save_hit_pts(other.getSaveHitPts()),
		hit_pts(other.getHitPts()),
		nrg_pts(other.getNrgPts()),
		atk_dmg(other.getAtkDmg())
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called." << std::endl;
}


std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getSaveHitPts(void) const
{
	return (this->save_hit_pts);
}

int	ClapTrap::getHitPts(void) const
{
	return (this->hit_pts);
}

unsigned int	ClapTrap::getNrgPts(void) const
{
	return (this->nrg_pts);
}

unsigned int	ClapTrap::getAtkDmg(void) const
{
	return (this->atk_dmg);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_pts > 0)
	{
		if (this->nrg_pts == 0)
		{
			std::cout << this->getName() << " has no more energy points and can't attack." << std::endl;
			return ;
		}
		this->nrg_pts--;
		std::cout << this->getName() << " attacks "
		<< target << " causing " << this->getAtkDmg()
		<< " damages !" << std::endl;
	}
	else
		std::cout << this->getName() << " is dead and can't attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPts() > 0)
	{
		this->hit_pts -= amount;
		std::cout << this->getName() << " has taken " << amount << " damages";
		if (this->getHitPts() <= 0)
		{
			std::cout << " and is dead." << std::endl;
			this->hit_pts = 0;
		}
		else
			std::cout << " and has " << this->getHitPts() << " hit points left."<< std::endl;
	}
	else
		std::cout << this->getName() << " is already dead and can't take more damages." << std::endl;
}

void	ClapTrap::beRepaired(int amount)
{
		if (this->getNrgPts() == 0)
		{
			std::cout << this->getName() << " has no more energy points and can't heal." << std::endl;
			return ;
		}
		if (this->getHitPts() + amount > this->getSaveHitPts())
		{
			if (this->getHitPts() != this->getSaveHitPts())
			{
				this->nrg_pts--;
				this->hit_pts = this->getSaveHitPts();
			std::cout << this->getName() << " tries to heal for " << amount << " hit points. " << this->getName() << " can't heal over the initial hit points value and now has " << this->getHitPts() << " hit points." << std::endl;
			}
			else
				std::cout << this->getName() << " is already at max hit points" << std::endl;
			return ;
		}
		if (this->getHitPts() == 0)
			std::cout << this->getName() << " is back to life ! ";
		this->hit_pts += amount;
		this->nrg_pts--;
		std::cout << this->getName() << " healed for " << amount << " hit points and now has " << this->getHitPts() << " hit points." << std::endl;
}

ClapTrap &	ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.getName();
	this->save_hit_pts = other.getSaveHitPts();
	this->hit_pts = other.getHitPts();
	this->nrg_pts = other.getNrgPts();
	this->atk_dmg = other.getAtkDmg();
	return (*this);
}
