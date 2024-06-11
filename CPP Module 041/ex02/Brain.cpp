/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:38:54 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/08 15:38:57 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor of Brain is called" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
	std::cout << "Brain is Created" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain is created by a Copy Constructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed" << std::endl;
}

void	Brain::displayIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}