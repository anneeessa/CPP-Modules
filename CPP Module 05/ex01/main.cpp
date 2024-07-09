/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:24:07 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 14:24:07 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	try
	{
		Bureaucrat b("B1", 1);
		std::cout << b<<std::endl;
		Form f("Form1", 148);
		std::cout << f <<std::endl;
		b.signForm(f);
		std::cout << f <<std::endl;
		std::cout <<std::endl;
		Bureaucrat b1("B2", 150);
		std::cout<< b1<<std::endl;
		b1.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
}