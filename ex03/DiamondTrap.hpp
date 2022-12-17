/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:21:05 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 10:02:14 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
