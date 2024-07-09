/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:04:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:04:38 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm:public Form
{
	private:
	

	public:
	// RobotomyRequestForm();
	RobotomyRequestForm(const std::string& starget);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

	void execute(const Bureaucrat& executor) const;
};


#endif
