/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:43:40 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/22 15:20:56 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack &other): std::stack<T>(other){}
		MutantStack &operator=(const MutantStack &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		
		iterator begin() { return (this->c.begin()); }
		const_iterator	begin() const { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }
		const_iterator	end() const { return (this->c.end()); }

};

#endif 