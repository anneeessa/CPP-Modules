/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:45:31 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/23 21:21:16 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name_stack;
	std::string name_heap;

	std::cout << "Give a Heap Zombie Name :";
	std::cin >> name_heap;
	std::cout << "Give a Stack Zombie Name :";
	std::cin >> name_stack;

	Zombie *obj = newZombie(name_heap);
	obj->announce();
	randomChump(name_stack);
	delete obj;
	return (0);

}
