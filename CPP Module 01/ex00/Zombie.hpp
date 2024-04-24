/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:45:50 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/20 03:30:15 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string name;

public:

	void setName(std::string name);
	std::string getName(void);
	void announce (void);
	
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name);

#endif
