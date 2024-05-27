/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:33 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/27 13:16:29 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::Fixed(const int i)
{
	this->value = i << this->bit;
}


Fixed::Fixed(const float f)
{
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

bool Fixed::operator>( Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<( Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<=( Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator>=( Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator==( Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=( Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	return(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return(this->toFloat() / rhs.toFloat());
}

//pre
Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}
//post
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	++this->value;
	return(old);
	
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	--this->value;
	return(old);
}

Fixed & Fixed::min(Fixed &value1, Fixed &value2)
{
	if (value1.toFloat() < value2.toFloat())
		return (value1);
	else
		return (value2);	
}

const Fixed & Fixed::min(Fixed const &value1, Fixed const &value2)
{
	if (value1.toFloat() < value2.toFloat())
		return (value1);
	else
		return (value2);
}

Fixed & Fixed::max(Fixed &value1, Fixed &value2)
{
	if (value1.toFloat() > value2.toFloat())
		return (value1);
	else
		return (value1);
}

const Fixed & Fixed::max(Fixed const &value1, Fixed const &value2)
{
	if (value1.toFloat() > value2.toFloat())
		return (value1);
	else
		return (value2);
}
