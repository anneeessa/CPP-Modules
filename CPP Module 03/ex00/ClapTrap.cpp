/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:25:23 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 18:22:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "Default ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage)
	: name(name), hitPoint(hitPoint), energyPoint(energyPoint), attackDamage(attackDamage)
{
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoint = clapTrap.hitPoint;
	this->energyPoint = clapTrap.energyPoint;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0 && this->hitPoint >= amount)
	{
		std::cout << "ClapTrap " << name << " is damaged " << amount << " of hit point!" << std::endl;
		this->hitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		this->hitPoint = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " is repaired " << amount << " of hit point!" << std::endl;
		this->hitPoint += amount;
		this->energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::displayStats() const
{
	std::cout << "ClapTrap " << name << " has " << hitPoint << " hit points, " << energyPoint << " energy points and " << attackDamage << " attack damage" << std::endl;
}
