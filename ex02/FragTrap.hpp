/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:04:05 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/17 09:47:04 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap& other);
	~FragTrap(void);
	FragTrap& operator=(FragTrap& other);
	void	highFiveGuys(void);

};

#endif
