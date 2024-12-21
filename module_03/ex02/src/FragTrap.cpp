/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:44:06 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/21 16:21:16 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	setColor(GREEN);
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name), _hitPoints(100), _energy(100), _attack(30)
{
	_hitPoints = 100;
	_energy = 100;
	_attack = 30;
	setColor(GREEN);
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	setColor(GREEN);
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	setColor(GREEN);
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
	setColor(RESET);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/
void FragTrap::highFivesGuys(void)
{
	setColor(GREEN);
	std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠒⢀⣠⠒⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣡⠈⠱⡗⠉⢮⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡁⠀⢀⡇⠀⢸⢃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠁⠀⠠⡇⠀⠐⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⠀⢰⠅⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠶⠀⠀⢸⡆⠀⠀⣯⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣮⠇⠀⠀⢸⡇⠀⠀⠺⣗⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠎⠀⠀⠀⢸⡷⠀⠀⠐⣯⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣟⠁⠀⠀⠀⢸⡇⠀⠀⠀⡩⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⠀⠀⠀⢼⡏⠀⠀⠀⠘⡵⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡎⠌⠀⠀⠀⠀⢺⣇⠀⠀⠀⠀⠵⣓⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠀⠀⠀⠀⠀⠀⣻⣧⠀⠀⠀⠀⠈⠔⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀\n"
				 "⠀⠀⠀⠀⠀⠀⣀⣠⡶⡖⠉⠂⠀⠀⠀⠀⠀⡐⣿⣿⡀⠀⠀⠀⠀⠈⠢⠙⢲⣶⣄⡀⠀⠀⠀⠀\n"
				 "⠀⠀⣀⣤⣴⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⢀⡰⣭⣿⣿⡥⣀⠠⠀⠀⠀⠀⠈⣶⣿⣿⣿⣿⣦⣄⣀\n"
				 "⠰⣾⣿⣿⣿⣿⡻⢧⢏⡳⣄⠀⠀⠀⣘⣦⡷⠛⠉⠈⠛⢳⣦⡑⠀⠀⠀⣴⣛⠾⣽⣻⣿⣿⣿⣿\n"
				 "⢘⣿⣿⡟⣷⣣⠟⡭⢎⡱⣌⠷⣤⣸⣵⣿⠀⠀⠀⠀⠀⠀⢿⣗⣦⣤⡞⣣⢎⡽⢣⣟⢷⣻⣿⣿\n"
				 "⠰⣿⣳⡻⣵⢋⡞⣱⢣⡳⣜⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣞⡵⣪⣜⢳⢮⣻⢽⡾⣿\n"
				 "⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉"
			  << std::endl;
	setColor(RESET);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */