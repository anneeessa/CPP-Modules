/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:37:27 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 14:11:08 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default constructor of Cat is called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat " << type << " is created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat " << other.type << " is created by copy constructor" << std::endl;
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " is destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
