/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:41:32 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/12 00:41:36 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Not Found");
	}
};

template <typename  T>
typename	T::iterator	easyFind(T &container, int val)
{
	typename	T::iterator it;

	it = std::find(container.begin(), container.end(), val);
	if (it != container.end())
		return (it);
	else
	{
		std::cout << val << " ";
		throw (NotFoundException());
	}
}

#endif