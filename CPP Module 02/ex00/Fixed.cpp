/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:33 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/25 02:40:31 by anmohamm         ###   ########.fr       */
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
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return(*this);  	
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called " << std::endl;
	return(this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called " << std::endl;
	this->value = raw;
}
