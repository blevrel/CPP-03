/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:04:05 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 10:02:03 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class	FragTrap : public virtual ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap& other);
	void	highFiveGuys(void);

};

#endif
