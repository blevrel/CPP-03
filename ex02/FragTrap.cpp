/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:27:52 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 09:47:23 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Default_name";
	this->save_hit_pts = 100;
	this->hit_pts = 100;
	this->nrg_pts = 100;
	this->atk_dmg = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string _name)
	:	ClapTrap(_name)
{
	this->save_hit_pts = 100;
	this->hit_pts = 100;
	this->nrg_pts = 100;
	this->atk_dmg = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(FragTrap& other)
	:	ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << this->name << ": Give me five guys !" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap& other)
{
	this->name = other.getName();
	this->save_hit_pts = other.getSaveHitPts();
	this->hit_pts = other.getHitPts();
	this->nrg_pts = other.getNrgPts();
	this->atk_dmg = other.getAtkDmg();
	return (*this);
}
