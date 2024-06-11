/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:37:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/11 14:27:45 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    i->makeSound();
    j->makeSound(); 
    meta->makeSound();

	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongAnimal	*i2 = new WrongCat();

	meta2->makeSound();
	i2->makeSound();

	delete i2;
	delete meta2;

	delete i;
	delete j;
	delete meta;
}