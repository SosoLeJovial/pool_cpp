/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:03:14 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/24 20:06:09 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <PhoneBook.hpp>
#include <cstring>
#include <stdlib.h>

PhoneBook::PhoneBook() : _maxuser(0){};

PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
	return ;
};

PhoneBook& PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		this->_maxuser = other._maxuser;
		for (size_t i = 0; i < other._maxuser; i++)
		{
			this->contacts[i] = other.contacts[i];
		}
	}
	return *this;
};

PhoneBook::~PhoneBook(){};

// Setters
void	PhoneBook::set_maxuser(size_t nb)
{
	if (nb <= 8)
		this->_maxuser = nb;
}

//getters
size_t	PhoneBook::get_maxuser()
{
	return (this->_maxuser);
}

// Methods
void	PhoneBook::add(const Contact &new_contact)
{
	size_t	maxuser;

	maxuser = get_maxuser();
	if (maxuser < 8)
	{
		contacts[maxuser] = new_contact;
		set_maxuser(++maxuser);
	}
	else
		contacts[_maxuser] = new_contact;
};

void	PhoneBook::search()
{
	PhoneBook::display_all();
};

std::string truncate(std::string str)
{
	std::string s;

	if (str.length() < 9)
		return (str);
	s = str.substr(0, 9) + ".";
	return (s);
}
void	PhoneBook::display_all()
{
	int n;
	std::string str;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "NickName" << std::endl;

	for (size_t i = 0; i < _maxuser; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_first_name()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_last_name()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].get_nickname()) << std::endl;
		}
	}
	std::cout << "Enter an index:" << std::endl;
	if (!(std::cin >> str))
		return ;
	n = atoi(str.c_str());
	if (n > 8)
	{
		std::cout << "Invalid index Kappa lol" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "NickName" << "|";
	std::cout << std::setw(10) << "Number" << "|";
	std::cout << std::setw(10) << "Secret" << std::endl;
	std::cout << std::setw(10) << contacts[n].get_first_name() << "|";
	std::cout << std::setw(10) << contacts[n].get_last_name() << "|";
	std::cout << std::setw(10) << contacts[n].get_nickname() << "|";
	std::cout << std::setw(10) << contacts[n].get_phone_number() << "|";
	std::cout << std::setw(10) << contacts[n].get_darkest_secret() << std::endl;
	
}

