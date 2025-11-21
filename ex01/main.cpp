/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:59:41 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 21:52:27 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Cmd.hpp"
# include <iostream>
# include <ostream>
# include <string>

int	main(void)
{
	std::string input;
	PhoneBook phonebook = PhoneBook();
	std::cout << "Welcome to your PhoneBook!" << std::endl;
	cmdHelp();
	while (1)
	{
		std::cout << "> ";
		std::cin >> input;
		if (input == "HELP")
			cmdHelp();
		else if (input == "ADD")
			cmdAdd(phonebook);
		else if (input == "SEARCH")
			cmdSearch(phonebook);
		else if (input == "EXIT")
			break;
	}
}