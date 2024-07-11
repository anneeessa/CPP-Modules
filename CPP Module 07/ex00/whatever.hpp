/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 00:40:38 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/10 00:41:00 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
	 	return  (b);
}


template <class T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else
	 	return (b);
}

#endif
