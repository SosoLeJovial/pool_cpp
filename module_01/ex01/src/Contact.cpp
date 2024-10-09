/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:17:59 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/09 02:47:40 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <limits>
#include <iostream>

Contact::Contact(){};

Contact::Contact(const Contact &other)
{
	*this = other;
};

Contact& Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		this->first_name = other.first_name;
		this->last_name = other.last_name;
		this->nickname = other.nickname;
		this->darkest_secret = other.darkest_secret;
		this->phone_number = other.phone_number;
	}
	return (*this);
};
		
Contact::~Contact(){};

void	Contact::set_info()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Entrez le prénom: ";
	std::getline(std::cin, first_name);
	std::cout << "Entrez le nom de famille: ";
	std::getline(std::cin, last_name);
	std::cout << "Entrez le surnom: ";
	std::getline(std::cin, nickname);
	std::cout << "Entrez le numéro de téléphone: ";
	std::getline(std::cin, phone_number);
	std::cout << "Entrez le plus sombre secret: ";
	std::getline(std::cin, darkest_secret);
}

std::string Contact::get_first_name() const {return (first_name);};
std::string Contact::get_last_name() const {return (last_name);};
std::string Contact::get_nickname() const {return (nickname);};
std::string Contact::get_phone_number() const {return (phone_number);};
std::string Contact::get_darkest_secret() const {return (darkest_secret);};
