/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:01:58 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:01:58 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm 
{
	private:
	const std::string name;
	const std::string target;
	bool isSigned;
	const int grade_sign;
	const int grade_execute;
	AForm(void);//made this private so it cannnot be instantiated
	
	public:
	AForm(std::string name, std::string target,int grade_sign, int grade_execute);
	AForm(const AForm& copy);
	AForm& operator=(const AForm& copy);
	
	virtual ~AForm();
	virtual void execute(Bureaucrat const & executor) const = 0;

	std::string getName(void)const;
	std::string getTarget(void)const;
	int getSignGrade(void)const;
	int getExecuteGrade(void)const;
	bool getSigned(void)const;
	void beSigned(Bureaucrat& b);

	class GradeTooHighException:public std::exception
	{
		public:
		virtual const char* what()const throw()
		{
			return "AForm Grade Too High Exception";
		}
	};

	class GradeTooLowException:public std::exception
	{
		public:
		virtual const char* what()const throw()
		{
			return "AForm Grade Too Low Exception";
		}
	};
};

std::ostream& operator<<(std::ostream& os,AForm& f);

#endif