/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:35:12 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/07 06:53:07 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energy;
	int _attack;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copie);
	ClapTrap &operator=(const ClapTrap &copie);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(const std::string name);
	void setHitPoints(const std::string name);
	unsigned int getHitPoints() const;
	void setEnergy(const std::string name);
	unsigned int getEnergy() const;
	void setAttack(const std::string name);
};

#endif