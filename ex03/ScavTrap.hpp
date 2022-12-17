/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:07 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 10:05:41 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap(void);
	ScavTrap& operator=(const ScavTrap& other);
	void	attack(const std::string& target);
	void	guardGate(void);

};

#endif
