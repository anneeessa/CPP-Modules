/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:52:26 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/22 18:19:00 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << this->getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;

}

std::string Zombie::getName(void)
{
	return (this->name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Destroyed" << std::endl;
}

Zombie::Zombie(void)
{
	return ;
}
