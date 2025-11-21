/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:48:50 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 17:51:25 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACT 8

# include "Contact.hpp"
# include <cstddef>

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACT];
		size_t	contactsLength;
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
		Contact *getContact(size_t index);

};

#endif