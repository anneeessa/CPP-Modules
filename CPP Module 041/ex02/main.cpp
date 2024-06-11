/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:39:12 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 16:17:58 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	int	numAnimals = 10;
	const Animal	*ptrs[numAnimals];

	for (int i = 0; i < numAnimals / 2; i++)
		ptrs[i] = new Dog();
	for (int i = numAnimals / 2; i < numAnimals; i++)
		ptrs[i] = new Cat();

	for (int i = 0; i < numAnimals; i++)
		ptrs[i]->makeSound();

	for (int i = 0; i < numAnimals; i++)
		delete ptrs[numAnimals - 1 - i];
}