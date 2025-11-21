/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cmd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 21:49:12 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 22:16:44 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Utils.hpp"
#include <iostream>

void	cmdAdd(PhoneBook &phoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Please enter the first name > ";
	std::cin >> firstName;
	std::cout << "Please enter the last name > ";
	std::cin >> lastName;
	std::cout << "Please enter the nickname > ";
	std::cin >> nickname;
	std::cout << "Please enter the phone number > ";
	std::cin >> phoneNumber;
	std::cout << "Please enter the darkest secret > ";
	std::cin >> darkestSecret;
	phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void	cmdSearch(PhoneBook &phoneBook)
{
	Contact		*contact;
	size_t		i;

	if (!phoneBook.getContact(0))
	{
		std::cerr << "No contact in your Phone Book!" << std::endl;
		return ;
	}
	displayColumnString("Index", 10);
	displayColumnString("First Name", 10);
	displayColumnString("Last Name", 10);
	displayColumnString("Nickname", 10);
	std::cout << "|" << std::endl;
	for (size_t i = 0; i < MAX_CONTACT; i++)
	{
		contact = phoneBook.getContact(i);
		if (!contact)
			continue;
		displayColumnInteger((int)i, 10);
		displayColumnString(contact->getFirstName(), 10);
		displayColumnString(contact->getLastName(), 10);
		displayColumnString(contact->getNickname(), 10);
		std::cout << "|" << std::endl;
	}
	while (1)
	{
		std::cout << "Please select the index of the contact you want to display > ";
		std::cin >> i;
		contact = phoneBook.getContact(i);
		if (!contact)
			std::cerr << "Please provide a valid index!" << std::endl;
		else
		{
			std::cout << "First Name: " << contact->getFirstName() << std::endl;
			std::cout << "Last Name: " << contact->getLastName() << std::endl;
			std::cout << "Nickname: " << contact->getNickname() << std::endl;
			std::cout << "Phone Number: " << contact->getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contact->getDarkestSecret() << std::endl;
			break;
		}
	}
}

void	cmdHelp(void)
{
	std::cout << "HELP: Show this message" << std::endl;
	std::cout << "ADD: Add Contact to your PhoneBook" << std::endl << std::endl;
}