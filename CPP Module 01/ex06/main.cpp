/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:04:14 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/22 21:09:48 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac !=2)
	{
		std::cout << "PLEASE ENTER A LEVEL | DEBUG | INFO | WARNING | ERROR |" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	
}
