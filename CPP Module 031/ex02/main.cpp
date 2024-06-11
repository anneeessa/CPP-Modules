/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:26:17 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 18:39:58 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap fragTrap("Fraggy");

    fragTrap.attack("Enemy1");
    fragTrap.takeDamage(20);
    fragTrap.beRepaired(10);

    fragTrap.displayStats();

    fragTrap.highFivesGuys();

    return 0;
}