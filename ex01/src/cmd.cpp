/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 21:49:12 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 23:45:18 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include "utils.hpp"
# include <iostream>
# include <cstdlib>

void	cmdAdd(PhoneBook &phoneBook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	if (
		getInput(firstName, "Please enter the first name")
		|| getInput(lastName, "Please enter the last name")
		|| getInput(nickname, "Please enter the nickname")
		|| getInput(phoneNumber, "Please enter the phone number")
		|| getInput(darkestSecret, "Please enter the darkest secret")
	)
		return ;
	phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void	cmdSearch(PhoneBook &phoneBook)
{
	Contact		*contact;
	std::string	str_index;
	int			int_index;

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
		if (getInput(str_index, "Please select the index of the contact you want to display"))
			return ;
		if (!std::isdigit(str_index[0]))
		{
			std::cerr << "Invalid input! It must start by a number!" << std::endl;
			continue;
		}
		int_index = std::atoi(str_index.c_str());
		contact = phoneBook.getContact(int_index);
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
	std::cout << "ADD: Add Contact to your phone book" << std::endl;
	std::cout << "SEARCH: Search for a contact" << std::endl;
	std::cout << "EXIT: Exit phone book" << std::endl << std::endl;
}