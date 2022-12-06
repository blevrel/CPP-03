#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

private:

	std::string		name;
	unsigned int	save_hit_pts;
	unsigned int	hit_pts;
	unsigned int	nrg_pts;
	unsigned int	atk_dmg;

public:

	ClapTrap(std::string _name);
	~ClapTrap(void);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);

};

#endif
