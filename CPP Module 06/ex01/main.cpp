/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 01:12:35 by anmohamm          #+#    #+#             */
/*   Updated: 2024/07/09 15:46:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data myData = {42, "A"};
	std::cout << "Data: Id: " << myData.id << "  Name: " << myData.name << std::endl;
	std::cout << "Data Address:  " << &myData << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;

	std::cout <<"Serializing Data " <<std::endl;
	uintptr_t serializedPtr = Serializer::serialize(&myData);
	std::cout << "Data serialized to uintptr_t: " << serializedPtr << std::endl;

	std::cout << "---------------------------------------------------" << std::endl;
	
	std::cout << "Deserializing Data " <<std::endl;
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout <<  "Deserialized Data Address: " << deserializedPtr <<  std::endl;
	std::cout <<  "*Deserialized data: Id: " << deserializedPtr->id << " Name: " << deserializedPtr->name << std::endl;

	std::cout <<"---------------------------------------------------" << std::endl;
	if (&myData == deserializedPtr)
		std::cout <<"Serialization and Deserialization successful." << std::endl;
	else
		std::cout << "Serialization and Deserialization Failed." <<std::endl;
}
