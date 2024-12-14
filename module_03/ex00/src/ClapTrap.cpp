/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:14 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/14 15:13:31 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name(""), _hitPoints(10), _energy(0), _attack(0)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << "destroyed!" << std::endl;
	setColor(RESET);
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energy(0), _attack(0)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << getName() << " created!" << std::endl;
	setColor(RESET);
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name),
	  _hitPoints(other._hitPoints),
	  _energy(other._energy),
	  _attack(other._attack)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << getName() << " created!" << std::endl;
	setColor(RESET);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << getName() << " Destroyed!" << std::endl;
	setColor(RESET);
}

void ClapTrap::attack(const std::string &target)
{
	setColor(YELLOW);
	if (this->_energy < 1)
	{
		std::cout << "ClapTrap " << getName() << " has no energy to attack!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << getName() << "attacks " << target << " causing " << this->_attack << " points of damage!" << std::endl;
	_energy -= 1;
	setColor(RESET);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	setColor(RED);
	if (getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << getName() << " is already dead!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
	amount > _hitPoints ? setHitPoints(0) : setHitPoints(getHitPoints() - amount);
	if (getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << getName() << " is dead!" << std::endl;
	}
	setColor(RESET);
}
void ClapTrap::beRepaired(unsigned int amount)
{
	setColor(GREEN);
	if (getHitPoints() < 1)
	{
		std::cout << "ClapTrap " << getName() << " is already dead!" << std::endl;
		setColor(RESET);
		return;
	}
	if (getEnergy() < 1)
	{
		std::cout << "ClapTrap " << getName() << " has no energy to be repaired!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << getName() << " is being repaired for " << amount << " points!" << std::endl;
	setHitPoints(getHitPoints() + amount);
	setColor(RESET);
}

void ClapTrap::displayStats() const
{
	setColor(CYAN);
	std::cout << "ClapTrap " << getName() << " has " << getHitPoints() << " hit points, " << getEnergy() << " energy and " << _attack << " attack points!" << std::endl;
	setColor(RESET);
}

void ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

void ClapTrap::setEnergy(int energy)
{
	this->_energy = energy;
}

unsigned int ClapTrap::getEnergy() const
{
	return this->_energy;
}

void ClapTrap::setAttack(int attack)
{
	this->_attack = attack;
}