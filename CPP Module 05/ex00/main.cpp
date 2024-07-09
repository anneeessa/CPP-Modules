/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:23:09 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 14:23:09 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{	
	try
	{
		Bureaucrat b("low", 150);
		std::cout << b<<std::endl;
		b.decGrade();
		std::cout << b <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		Bureaucrat c("high", 1);
		std::cout<< c<<std::endl;
		c.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout<<e.what()<<std::endl;
	}
}