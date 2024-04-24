/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:52:30 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/23 21:48:07 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

class Zombie
{
	private:

		std::string name;

	public:
		
		void setName(std::string name);
		std::string getName(void);
		void announce (void);
	
		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
