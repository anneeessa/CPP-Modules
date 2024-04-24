/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:45:47 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/20 05:44:45 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << this->getName() << " :" << "BraiiiiiiinnnzzzZ..." << std::endl;

}

std::string Zombie::getName(void)
{
	return (this->name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " Created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Destroyed" << std::endl;
}
