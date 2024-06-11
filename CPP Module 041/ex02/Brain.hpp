/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:38:58 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/10 16:19:18 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(std::string idea);
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain();

	void	displayIdeas() const;
};

#endif
