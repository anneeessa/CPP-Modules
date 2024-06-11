/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:26:17 by anmohamm          #+#    #+#             */
/*   Updated: 2024/06/04 14:02:22 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("hi", 10, 1 ,1);
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);
	clapTrap.displayStats();

    return 0;
}