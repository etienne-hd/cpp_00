/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cmd.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 21:48:47 by ehode             #+#    #+#             */
/*   Updated: 2025/11/21 21:51:23 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMD_HPP
# define CMD_HPP
# include "PhoneBook.hpp"

void	cmdAdd(PhoneBook &phoneBook);
void	cmdSearch(PhoneBook &phoneBook);
void	cmdHelp(void);

#endif