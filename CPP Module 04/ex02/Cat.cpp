/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:39:01 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 16:17:13 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default constructor of Cat is called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat " << type << " is created" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat " << other.type << " is created by copy constructor" << std::endl;
	brain = new Brain();
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	*brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat " << type << " is destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
