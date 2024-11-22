/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:48:23 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/22 19:20:06 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void display_complain(void (Harl::*complains[])(), Harl &harl, int logLevel )
{
	while (logLevel < 4)
	{
		(harl.*complains[logLevel])();
		logLevel++;
	}
}

void Harl::complain(std::string level)
{
	void (Harl::*complains[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levelSelected = -1;
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			levelSelected = i;
			break;
		}
	}
	
	switch (levelSelected)
	{
	case 0:
		display_complain(complains, *this, levelSelected);
		break ;
	case 1:
		display_complain(complains, *this, levelSelected);
		break ;
	case 2:
		display_complain(complains, *this, levelSelected);
		break ;
	case 3:
		display_complain(complains, *this, levelSelected);
		break ; 
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

