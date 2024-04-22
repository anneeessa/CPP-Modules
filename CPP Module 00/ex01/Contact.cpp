/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:17:56 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/15 15:30:05 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname){
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	if (firstName.length() > 9)
		return (firstName.substr(0, 9).append("."));
	else
		return (firstName);
}

std::string Contact::getLastName()
{
	if (lastName.length() > 9)
		return (lastName.substr(0, 9).append("."));
	else
		return (lastName);
}

std::string Contact::getNickname()
{
	if (nickname.length() > 9)
		return (nickname.substr(0, 9).append("."));
	else
		return (nickname);
};

std::string Contact::getPhoneNumber()
{
		return (this->phoneNumber);
};

std::string Contact::getDarkestSecret()
{
	return(this->darkestSecret);
};

void Contact::printDetails()
{
			std::cout << "First Name: " << firstName << std::endl
				  << "Last Name: " << lastName << std::endl
				  << "Nickame: " << nickname << std::endl
				  << "Phone: " << phoneNumber << std::endl
				  << "Darkest Secret: " << darkestSecret << std::endl;
}
