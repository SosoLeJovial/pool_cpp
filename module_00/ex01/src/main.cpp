/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:13:19 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/24 19:54:21 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <csignal>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main (void)
{
	std::string	input;
	PhoneBook	directory;
	Contact		new_contact;

	directory = PhoneBook();
	std::cout << "Welcome to my awesome PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "PhoneBook~ ";
		if (!(std::cin >> input) || input == "EXIT")
		{
			std::cout << std::endl << "Bye!" << std::endl;
			break ;
		}
		if (input == "ADD")
		{
			new_contact = Contact();
			new_contact.set_info();
			directory.add(new_contact);
		}
		if (input == "SEARCH")
			directory.search();
		if (!std::cin)
		{
			std::cout << "Bye!" << std::endl;
			return (-2);
		}
	}
	return (0);
}
