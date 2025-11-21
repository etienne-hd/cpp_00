/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:55:18 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 17:55:41 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->firstName = "John";
	this->lastName = "Doe";
	this->nickname = "JohnDoe67";
	this->phoneNumber = "0767676767";
	this->darkestSecret = "Hi, i'm steve!";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::~Contact()
{
	std::cout << "DESTRUCTOR CALLED" << std::endl;
}

std::string Contact::getFirstName(void)
{
	return this->firstName;
}
std::string Contact::getLastName(void)
{
	return this->lastName;
}
std::string Contact::getNickname(void)
{
	return this->nickname;
}
std::string Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}
std::string Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}