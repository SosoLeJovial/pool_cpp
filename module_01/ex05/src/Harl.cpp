/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:48:23 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/19 18:17:24 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug()
{
	std::cout << "Debug: " << _name << std::endl;
}

void Harl::info()
{
	std::cout << "Info: " << _name << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning: " << _name << std::endl;
}

void Harl::error()
{
	std::cout << "Error: " << _name << std::endl;
}

void Harl::complain(std::string level)
{
	
}