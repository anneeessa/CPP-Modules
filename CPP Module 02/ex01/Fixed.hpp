/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:01:36 by anmohamm          #+#    #+#             */
/*   Updated: 2024/05/27 13:29:45 by anmohamm         ###   ########.fr       */
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
		Fixed(Fixed const &other);
		Fixed & operator = (Fixed const &rhs);
		~Fixed();
		Fixed(const int i);
		Fixed(const float f);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream    &operator<<(std::ostream &o, Fixed const &i);

# endif
