/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:03:59 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/26 15:03:59 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"


class Intern
{
	public:
	Intern();
	Intern(Intern& copy);
	Intern& operator=(Intern& copy);
	~Intern();

	Form* robotomyform(std::string target);
	Form* presidentialform(std::string target);
	Form* shrubberyform(std::string target);
	Form* makeForm(std::string Formname, std::string target);
};

typedef Form* (Intern::*func_ptr)(std::string);

#endif