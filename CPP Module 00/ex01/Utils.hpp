/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:19:15 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/14 12:19:25 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

class Utils
{
public:
static bool is_number(const std::string &str);
static int stringToInt(const std::string &str);
static int containsOnlySpaces(const std::string str);
};



#endif