/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:40:03 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/22 18:47:41 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:

		std::string _name;
		Weapon 		*_weapon;
	
	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void setWeapon(Weapon &weapon);
		
};

#endif
