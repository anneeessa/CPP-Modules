/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:04:03 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/23 20:41:52 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string complain;

	std::cout << "Enter the complain \"INFO/WARNING/ERROR/DEBUG\": ";
	std::cin >> complain;
	std::cout << std::endl;
	harl.complain(complain);

	return 0;
}
