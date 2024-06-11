/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:25:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/05 14:52:05 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;


public:
	ClapTrap();
	ClapTrap(const std::string &name, unsigned int hitPoint = 10, unsigned int energyPoint = 10, unsigned int attackDamage = 0);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap	&operator=(const ClapTrap &clapTrap);
	~ClapTrap();


	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


	void	displayStats() const;

};

#endif