/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:33 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/27 13:36:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called " << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called " << std::endl;
	this->value = i << this->bit;  
}


Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called " << std::endl;
	this->value = roundf(f * (1 << this->bit));
}

int Fixed::getRawBits(void) const
{
	return(this->value);
}


void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return(*this);  	
}

float Fixed::toFloat(void) const
{
	return (value * 1.0 / (1 << bit));
}

int Fixed::toInt(void) const
{
	return (value >> bit);
}

std::ostream &operator<<(std::ostream &o, const Fixed &i)
{
    o << i.toFloat();
    return o;
}
