/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:48:50 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 23:23:50 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstddef>
#include <cstring>

PhoneBook::PhoneBook()
{
	this->contactsLength = 0;
	std::cout << "PhoneBook constructor has been called!" << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	if (this->contactsLength >= MAX_CONTACT)
	{
		for (size_t i = 1; i < MAX_CONTACT; i++)
		{
			this->contacts[i - 1].setFirstName(this->contacts[i].getFirstName());
			this->contacts[i - 1].setLastName(this->contacts[i].getLastName());
			this->contacts[i - 1].setNickname(this->contacts[i].getNickname());
			this->contacts[i - 1].setPhoneNumber(this->contacts[i].getPhoneNumber());
			this->contacts[i - 1].setDarkestSecret(this->contacts[i].getDarkestSecret());
		}
		contactsLength--;
		std::cout << "Too many contact, the oldest contact has been removed!" << std::endl;
	}
	this->contacts[contactsLength].setFirstName(firstName);
	this->contacts[contactsLength].setLastName(lastName);
	this->contacts[contactsLength].setNickname(nickname);
	this->contacts[contactsLength].setPhoneNumber(phoneNumber);
	this->contacts[contactsLength].setDarkestSecret(darkestSecret);
	contactsLength++;
	std::cout << "Successfully added contact to the PhoneBook!" << std::endl;
}

Contact *PhoneBook::getContact(size_t index)
{
	if (this->contactsLength == 0 || index > this->contactsLength - 1)
		return (NULL);
	return (&this->contacts[index]);
}