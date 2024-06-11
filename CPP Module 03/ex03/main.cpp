/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:26:17 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/28 18:51:23 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("hi");

    diamondTrap.whoAmI();
    diamondTrap.attack("Enemy1");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.displayStats();

    return 0;
}