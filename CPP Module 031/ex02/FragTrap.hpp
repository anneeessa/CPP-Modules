/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:25:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 18:44:53 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name, unsigned int hitPoint = 100, unsigned int energyPoint = 100, unsigned int attackDamage = 30);
	FragTrap(const FragTrap &fragTrap);
	FragTrap	&operator=(const FragTrap &fragTrap);
	~FragTrap();

	void highFivesGuys(void);
};


#endif
