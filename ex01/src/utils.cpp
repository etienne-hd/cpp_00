/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 21:45:58 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 23:28:17 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

void displayColumnString(std::string str, size_t column_size)
{
	size_t j;
	
	j = 0;
	std::cout << "|";
	for (size_t i = 0; i < column_size; i++)
	{
		if (i + str.length() < column_size)
			std::cout << " ";
		else if (i == column_size - 1 && str.length() >= column_size)
			std::cout << ".";
		else
			std::cout << str[j++];
	}
}

static size_t	getIntegerLength(int integer)
{
	size_t	length;

	length = 0;
	if (integer == 0)
		return (1);
	if (integer < 0)
		length++;
	while (integer != 0)
	{
		integer /= 10;
		length++;
	}
	return (length);
}

void displayColumnInteger(int integer, size_t column_size)
{
	size_t	length;

	length = getIntegerLength(integer);
	std::cout << "|";
	for (size_t i = 0; i < column_size; i++)
	{
		if (i + length < column_size)
			std::cout << " ";
		else if (i == column_size - 1 && length >= column_size)
			std::cout << ".";
		else
		{
			std::cout << integer;
			break;
		}
	}
}

bool getInput(std::string &value, std::string prompt)
{
	if (prompt.empty())
		std::cout << "> ";
	else
		std::cout << prompt << " > ";

	value.clear();
	while (value.empty())
	{
		std::getline(std::cin, value);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (true);
		}
	}
	return (false);
}