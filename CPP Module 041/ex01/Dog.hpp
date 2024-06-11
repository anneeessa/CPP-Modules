/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:38:37 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 15:34:48 by anmohamm         ###   ########.fr       */
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
