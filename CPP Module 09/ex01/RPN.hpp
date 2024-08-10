/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:25:11 by anmohamm          #+#    #+#             */
/*   Updated: 2024/08/02 11:37:10 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <deque>

class NotValidException : public std::exception
{
public:
	virtual const char *what() const throw();
};

class DivisionByZeroException : public std::exception
{
public:
	virtual const char *what() const throw();
};

class RPN
{
private:
	std::deque<int>	deq;

public:
	RPN();
	RPN(const RPN &other);
	RPN	&operator=(const RPN &rhs);
	~RPN();

	bool	isValidExpression(std::string expression);
	int	evaluateRPNExpression(std::string expression);

};


#endif
