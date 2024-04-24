/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:51:15 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/23 22:21:52 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool is_number(const std::string &str)
{
	std::string::const_iterator it = str.begin();
	while (it != str.end() && std::isdigit(*it))
		++it;
	return !str.empty() && it == str.end();
}

int stringToInt(const std::string &str)
{
	std::istringstream iss(str);
	int result;
	iss >> result;
	return result;
}

int main(void)
{
	Zombie *zombiesInHorde;
	std::string num;
	int n;
	std::string name;

	std::cout << "Enter the name of Zombies :";
	std::cin >> name;
	std::cout << "Enter number of Zombies :";
	std::cin >> num;
	if ((is_number(num) == false) || (stringToInt(num) <= 0))
	{
		std::cout<<std::endl<<"Invalid Number of Zombies!!!"<<std::endl;
		return (0);
	}
	n = stringToInt(num);
	zombiesInHorde = zombieHorde(n,name);

	for (int i = 0; i < n; i++)
		zombiesInHorde[i].announce();
	delete[] zombiesInHorde;
}
