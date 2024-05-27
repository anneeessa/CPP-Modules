/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:04:15 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/22 18:00:29 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	~Point();

	Point	&operator=(const Point &point);

	float	getX() const;
	float	getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
