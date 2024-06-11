/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:39:09 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 16:17:53 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain	*brain;

public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &ohter);
	~Dog();

	void	makeSound() const;
};

#endif