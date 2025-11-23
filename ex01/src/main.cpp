/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:59:41 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 23:45:08 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "utils.hpp"
# include "cmd.hpp"
# include <iostream>
# include <ostream>
# include <string>

int	main(void)
{
	std::string input;

	PhoneBook phonebook = PhoneBook();
	std::cout << "Welcome to your PhoneBook!" << std::endl << std::endl;
	cmdHelp();
	while (!std::cin.eof())
	{
		if (getInput(input, ""))
			break ;
		if (input == "HELP")
			cmdHelp();
		else if (input == "ADD")
			cmdAdd(phonebook);
		else if (input == "SEARCH")
			cmdSearch(phonebook);
		else if (input == "EXIT")
			break;
		else
			std::cerr << "Invalid command! (" << input << ")" << std::endl;
	}
}