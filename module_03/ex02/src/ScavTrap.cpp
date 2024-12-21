/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:30:12 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/21 15:43:58 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << getName() << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setColor(BLUE);
	std::cout << "ScavTrap " << getName() << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	setColor(BLUE);
	std::cout << "ScavTrap " << getName() << " has been created!" << std::endl;
	setColor(RESET);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	(void)other;
	return *this;
}

ScavTrap::~ScavTrap()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << getName() << " has been destroyed!" << std::endl;
	setColor(RESET);
}

void ScavTrap::guardGate()
{
	setColor(BLUE);
	std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode!" << std::endl;
	setColor(RESET);
}

void ScavTrap::attack(const std::string &target)
{
	setColor(YELLOW);
	if (this->_energy < 1)
	{
		std::cout << "ClapTrap " << getName() << " has no energy to attack!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << this->_attack << " points of damage!" << std::endl;
	_energy -= 1;
	setColor(RESET);
}
