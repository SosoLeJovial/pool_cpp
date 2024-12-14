/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:30:12 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/14 18:47:40 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energy = 50;
	_attack = 20;
	setColor(BLUE);
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	setColor(BLUE);
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
	setColor(RESET);
}

void ScavTrap::guardGate()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode!" << std::endl;
	setColor(RESET);
}
