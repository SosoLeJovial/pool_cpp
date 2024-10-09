/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:03:14 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/09 02:42:37 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <PhoneBook.hpp>


PhoneBook::PhoneBook() : max_user(0){};

PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
	return ;
};

PhoneBook& PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		this->max_user = other.max_user;
		for (size_t i = 0; i < other.max_user; i++)
		{
			this->contacts[i] = other.contacts[i];
		}
	}
	return *this;
};

PhoneBook::~PhoneBook(){};

// Setters
void	PhoneBook::set_max_user(size_t nb)
{
	if (nb <= 8)
		this->max_user = nb;
}
//getters
size_t	PhoneBook::get_max_users()
{
	return (this->max_user);
}

// Methods
void	PhoneBook::add(const Contact &new_contact)
{
	if (max_user < 8)
	{
		contacts[max_user] = new_contact;
		max_user++;
	}
	else
	{
		contacts[max_user] = new_contact;
	}
};

void	PhoneBook::search(std::string name)
{
	(void)name;
	PhoneBook::display_all();
};

void	PhoneBook::display_all()
{
	std::cout << "display all called" << std::endl;
	for (size_t i = 0; i < max_user; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{
			std::cout << contacts[i].get_first_name() << std::endl;
		}
	}
}