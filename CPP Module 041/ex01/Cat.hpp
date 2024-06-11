/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:38:32 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 15:34:35 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"


class Cat : public Animal
{
private:
	Brain	*brain;

public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void	makeSound() const;
};

#endif
