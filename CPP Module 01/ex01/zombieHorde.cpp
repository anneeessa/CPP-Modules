/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:26:55 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/22 18:27:39 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombiesInHorde = new Zombie[N];
	std::stringstream zombieNumber;

	for (int i = 0; i < N; i++)
	{
		zombieNumber << i + 1;
		zombiesInHorde[i].setName(name + " " + zombieNumber.str());
		zombieNumber.str("");
	}
	return (zombiesInHorde);
}
