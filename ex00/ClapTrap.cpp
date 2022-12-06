#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), save_hit_pts(10), hit_pts(10), nrg_pts(10), atk_dmg(0)
{
	std::cout << "Constructor called, " << _name << " is ready to fight !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called, " << this->name << " is too tired" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->nrg_pts == 0)
	{
		std::cout << this->name<< " has no more energy points and can't attack" << std::endl;
		return ;
	}
	this->nrg_pts--;
	std::cout << this->name << " attacks " << target << " causing " << this->atk_dmg << " damages !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_pts -= amount;
	std::cout << this->name << " has taken " << amount << " damages";
	if (this->hit_pts == 0)
		std::cout << " and is dead" << std::endl;
	else
		std::cout << " and has " << this->hit_pts << " hit points left"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->nrg_pts == 0)
	{
		std::cout << this->name<< " has no more energy points and can't heal" << std::endl;
		return ;
	}
	if (this->hit_pts + amount > this->save_hit_pts)
	{
		std::cout << this->name << " can't heal because it would go over the initial hit points value" << std::endl;
		return ;
	}
	this->hit_pts += amount;
	this->nrg_pts--;
	std::cout << this->name << " healed for " << amount << " hit points and now has " << this->hit_pts << " hit points" << std::endl;
}

