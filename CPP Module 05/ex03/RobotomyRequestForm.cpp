/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:04:32 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:04:32 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& starget):Form("RobotomyRequestForm", starget, 72, 45)
{
	std::cout<<"Robotomy Request Form constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecuteGrade())
{
	std::cout<<"Robotomy Request Form copy constructor called"<<std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
	{
		Form::operator=(copy);
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"Robotomy Request Form Destructor"<<std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
	{
		std::cout<<"Cannot execute form as Execution grade is too low!!"<<std::endl;
		throw Form::GradeTooLowException();
	}
	else if (!this->getSigned())
	{
		std::cout<<"Cannot execute form as it is not signed"<<std::endl;
		return ;
	}
	else
	{
		std::cout<<"SOME DRILLING NOISE"<<std::endl;
		static int i;
		if (i % 2 == 0)
			std::cout<<this->getTarget()<<" has been robotomized"<<std::endl;
		else
			std::cout<<"Failed to Robotomise "<<this->getTarget()<<std::endl;
		i++;
	}
}