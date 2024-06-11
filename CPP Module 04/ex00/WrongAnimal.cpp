/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:37:49 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 14:28:01 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal is called" << std::endl;
	type = "Default";
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "WrongAnimal " << type << " is created" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal " << other.type << " is created by copy constructor" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " is destroyed" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Generic WrongAnimal sound" << std::endl;
}
