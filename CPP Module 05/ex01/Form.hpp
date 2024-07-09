/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:23:59 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 14:23:59 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form 
{
	private:
	const std::string name;
	bool isSigned;
	const int grade;

	public:
	Form(void);
	Form(std::string name, int grade);
	Form(const Form& copy);
	Form& operator=(const Form& copy);
	~Form();
	std::string getName(void)const;
	int getGrade(void)const;
	bool getSigned(void);
	void beSigned(Bureaucrat& b);

	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char* what()const throw()
		{
			return "Form Grade Too High Exception";
		}
	};

	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char* what()const throw()
		{
			return "Form Grade Too Low Exception";
		}
	};
};

std::ostream& operator<<(std::ostream& os,Form& f);

#endif