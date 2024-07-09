/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:04:05 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:04:05 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{	
	Form* rrf;
	Intern someRandomIntern;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	try
	{
		Bureaucrat b("B1", 155);
		std::cout << b<<std::endl;
		b.signForm(*rrf);
		b.executeForm(*rrf);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
		delete rrf;
	}
}