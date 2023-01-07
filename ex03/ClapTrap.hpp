/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:39:19 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/06 18:12:41 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

protected:

	std::string		name;
	int	save_hit_pts;
	int				hit_pts;
	unsigned int	nrg_pts;
	unsigned int	atk_dmg;

public:

	ClapTrap(std::string _name);
	ClapTrap(void);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);
	std::string		getName(void) const;
	int	getSaveHitPts(void) const;
	int				getHitPts(void) const;
	unsigned int	getNrgPts(void) const;
	unsigned int	getAtkDmg(void) const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(int	amount);
	ClapTrap &		operator=(const ClapTrap& other);

};

#endif
