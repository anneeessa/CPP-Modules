/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:02:20 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:02:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
	try
	{
		Bureaucrat b("B1", 6);
		std::cout << b<<std::endl;
		ShrubberyCreationForm f("Home");
		RobotomyRequestForm r("Home");
		PresidentialPardonForm p("Tod");
		
		std::cout <<std::endl<< f <<std::endl;
		b.executeForm(f);
		b.signForm(f);
		b.executeForm(f);
		
		std::cout <<std::endl<< p <<std::endl;
		b.signForm(p);
		b.executeForm(p);

		std::cout <<std::endl<< r <<std::endl;
		b.signForm(r);
		b.executeForm(r);
		b.executeForm(r);
		std::cout <<std::endl<< f <<std::endl;
		std::cout <<std::endl;

		Bureaucrat b1("B2", 146);
		ShrubberyCreationForm f1("SecondHome");
		std::cout <<std::endl<< f <<std::endl;
		b1.signForm(f1);
		b1.executeForm(f1);

	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
}