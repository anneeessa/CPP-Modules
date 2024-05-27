/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:36 by anmohamm          #+#    #+#             */
/*   Updated: 2024/04/27 10:59:42 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<string>
#include <cmath>

class Fixed
{ 
	private:
		int value;
		static const int bit = 8;
	public:
		Fixed();
		Fixed(Fixed const &rhs);
		Fixed & operator = (Fixed const &rhs);
		~Fixed();
		Fixed(const int i);
		Fixed(const float f);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		bool operator>( Fixed const & rhs) const;
		bool operator<( Fixed const & rhs) const;
		bool operator>=( Fixed const & rhs) const;
		bool operator<=( Fixed const & rhs) const;
		bool operator==( Fixed const & rhs) const;
		bool operator!=( Fixed const & rhs) const;

		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &value1, Fixed &value2);
		static const Fixed& min(Fixed const &value1, Fixed const &value);
		static Fixed& max(Fixed &value1, Fixed &value2);
		static const Fixed& max(Fixed const &value1, Fixed const &value);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &i);

# endif
