/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:03:25 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:03:25 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;
class Bureaucrat
{
	private:
	const std::string name;
	int grade;

	public:
	Bureaucrat();
	Bureaucrat(std::string bname, int bgrade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat(void);
	const std::string getName(void);
	int getGrade(void)const;
	void incGrade(void);
	void decGrade(void);
	void signForm(Form& f);
	void executeForm(const Form& form);

	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Grade Too High Exception";
		}
	};
	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Grade Too Low Exception";
		}
	};
};

std::ostream& operator<<(std::ostream& o, Bureaucrat& b);

#endif