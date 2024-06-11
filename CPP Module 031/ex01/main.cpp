/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:26:17 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 13:44:48 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("hi");
    scavTrap.displayStats();
    scavTrap.attack("Enemy");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(5);
	scavTrap.displayStats();
    scavTrap.guardGate();

    return 0;
}