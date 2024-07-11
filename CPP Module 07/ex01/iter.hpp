/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:24:02 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/11 16:30:19 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void	printValue(T &a)
{
	std::cout << a << " ";
}

template <class T>
void	iter(T *array, int length, void (*f)(T &a))
{
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
	std::cout << std::endl;
}

template <class T>
void	iter(T *array, int length, void (*f)(const T& a))
{
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
	std::cout << std::endl;
}

#endif