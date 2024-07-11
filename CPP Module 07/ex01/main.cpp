/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:24:14 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/11 16:30:55 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
	int intArray[5] = {5,25,45,30,1};
	float floatArray[6] = {4.53,6.75,2.34,1.05,6.75};
	std::string stringArray[4] = {"42", "abudhabi", "school"};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "---- Result of int Array ----" << std::endl;
	iter(intArray, 5, printValue<int>);
	std::cout << "---- Result of float Array ----" << std::endl;
	iter(floatArray, 5, printValue<float>);
	std::cout << "---- Result of string Array ----" << std::endl;
	iter(stringArray, 3, printValue<std::string>);
	std::cout << "---- Result of double Array ----" << std::endl;
	iter(doubleArray, 5, printValue<double>);
	std::cout << "---- Result of char Array ----" << std::endl;
	iter(charArray, 5, printValue<char>);

	return 0;
}
