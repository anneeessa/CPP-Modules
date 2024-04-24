/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:29:44 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/22 18:36:27 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "************************************" << std::endl;
	std::cout << "          STRING VALUE		      " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "String Pointer : " << *stringPTR << std::endl;
	std::cout << "String Reference : " << stringREF << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "          MEMORY ADDRESS			  " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << &brain << std::endl;
	std::cout << "String Pointer : " << stringPTR << std::endl;
	std::cout << "String Reference : " << &stringREF << std::endl;
	
}
