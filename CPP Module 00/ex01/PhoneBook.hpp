/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:19:00 by anmohamm          #+#    #+#             */
/*   Updated: 2024/03/15 00:51:35 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	Contact arrayOfContacs[8];
	int numberOfContacts;

	void printDetailedContact(int i);

public:
	PhoneBook() : numberOfContacts(0) {}

	void addContact(Contact contact);
	void search();
};

#endif
