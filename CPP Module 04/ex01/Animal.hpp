/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:38:16 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 14:52:33 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
protected:
	std::string	type;
	
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual ~Animal();

	std::string		getType() const;
	virtual	void	makeSound() const;

};

#endif