/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:14 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/21 20:29:05 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << "destroyed!" << std::endl;
	setColor(RESET);
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(100), _energy(50), _attack(20)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
	setColor(RESET);
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPt, unsigned int energy, int attack)
	: _name(name), _hitPoints(hitPt), _energy(energy), _attack(attack)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
	setColor(RESET);
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name),
	  _hitPoints(other._hitPoints),
	  _energy(other._energy),
	  _attack(other._attack)
{
	setColor(MAGENTA);
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
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
	std::cout << "ClapTrap " << _name << " Destroyed!" << std::endl;
	setColor(RESET);
}

void ClapTrap::attack(const std::string &target)
{
	setColor(YELLOW);
	if (this->_energy < 1)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!" << std::endl;
	_energy -= 1;
	setColor(RESET);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	setColor(RED);
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	amount > _hitPoints ? _hitPoints = 0 : _hitPoints -= amount;
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	}
	setColor(RESET);
}
void ClapTrap::beRepaired(unsigned int amount)
{
	setColor(GREEN);
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		setColor(RESET);
		return;
	}
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " has no energy to be repaired!" << std::endl;
		setColor(RESET);
		return;
	}
	std::cout << "ClapTrap " << _name << " is being repaired for " << amount << " points!" << std::endl;
	_hitPoints += amount;
	setColor(RESET);
}

void ClapTrap::displayStats() const
{
	setColor(CYAN);
	std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points, " << _energy << " energy and " << _attack << " attack points!" << std::endl;
	setColor(RESET);
}

void ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

std::string ClapTrap::getName() const
{
	return _name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}

unsigned int ClapTrap::getEnergy() const
{
	return _energy;
}

void ClapTrap::setAttack(int attack)
{
	this->_attack = attack;
}