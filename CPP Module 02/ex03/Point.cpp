/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:03:49 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/22 18:00:51 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) { }

Point::Point(const float x, const float y) : x(x), y(y) { }

Point::Point(const Point &point) : x(point.x), y(point.y) { }

Point::~Point() { }

Point	&Point::operator=(const Point &point)
{
	if (this != &point)
		*this = point;
	return (*this);
}

float	Point::getX() const
{
	return (x.toFloat());
}

float	Point::getY() const
{
	return (y.toFloat());
}
