/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 01:17:36 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 19:06:24 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name, unsigned int hitPoint = 100, unsigned int energyPoint = 50, unsigned int attackDamage = 20);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap	&operator=(const ScavTrap &scavTrap);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate();

};

#endif
