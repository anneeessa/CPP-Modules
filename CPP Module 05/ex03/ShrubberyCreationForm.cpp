/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:04:46 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:04:46 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& starget):Form("ShrubberyCreationForm", starget, 145, 137)
{
	std::cout<<"Shrubbery Creation Form constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecuteGrade())
{
	std::cout<<"Shrubbery Creation Form copy constructor called"<<std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		Form::operator=(copy);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"ShrubberyCreationForm Destructor"<<std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
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
		std::ofstream file((this->getTarget() + "_shrubbery").c_str()); //we use c_str() to convert string to const char*
		if (!file.is_open())
			std::cout<<"Failed to open file"<<std::endl;
		file<<"       ___        "<<std::endl;
		file<<"      (   )       "<<std::endl;
		file<<"     (     )      "<<std::endl;
		file<<"    (       )     "<<std::endl;
		file<<"   ( ''''''' )    "<<std::endl;
		file<<"  (  '''''''  )   "<<std::endl;
		file<<" (_____________)  "<<std::endl;
		file<<"       |  |       "<<std::endl;
		file<<"       |  |       "<<std::endl;
		file<<"       |  |       "<<std::endl;
		file<<"  (^). |__|.(^)    "<<std::endl;
		file.close();
		std::cout<<"Form successfully executed!!"<<std::endl;
	}
}