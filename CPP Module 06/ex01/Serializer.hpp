/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 01:13:21 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/09 15:46:29 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data 
{
	int id;
	std::string name;
};

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer& src);
	Serializer& operator=(const Serializer& rhs);
	~Serializer();

public:
	static uintptr_t	serialize(Data* ptr);
	static Data			*deserialize(uintptr_t raw);

};


#endif
