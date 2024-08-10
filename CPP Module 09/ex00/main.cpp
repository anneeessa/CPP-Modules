/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:22:06 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/22 19:22:12 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>

int main(int argc, char **argv)
{
	BitcoinExchange	btc;

	if (argc != 2)
	{
		std::cout << "Usage: ./btc [filename]" << std::endl;
		return (1);
	
	}

	try
	{
		btc.loadDataBase();
		btc.processInput(argv[1]);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
