/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:16:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/14 23:19:48 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main (int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1)
	{
		std::string word = av[i];
		while (word[j] != 0)
		{
			std::cout << char(std::toupper(word[j]));
			j++;
		}
		std::cout<<" ";
		i++;
		ac--;
		j = 0;
	}
	std::cout << std::endl;
	return (0);
}
