/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:39:19 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 15:23:10 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

protected:

	std::string		name;
	unsigned int	save_hit_pts;
	int				hit_pts;
	unsigned int	nrg_pts;
	unsigned int	atk_dmg;

public:

	ClapTrap(std::string _name);
	ClapTrap(void);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);
	std::string		getName(void) const;
	unsigned int	getSaveHitPts(void) const;
	int				getHitPts(void) const;
	unsigned int	getNrgPts(void) const;
	unsigned int	getAtkDmg(void) const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int	amount);
	ClapTrap &		operator=(const ClapTrap& other);

};

#endif
