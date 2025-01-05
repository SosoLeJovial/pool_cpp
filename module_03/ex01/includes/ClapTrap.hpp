/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:35:12 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/02 14:47:11 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energy;
	int _attack;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(unsigned int hitPt, unsigned int energy, int attack);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayStats() const;

	unsigned int getHitPoints() const;
	unsigned int getEnergy() const;
	std::string getName() const;
	void setName(const std::string name);
	void setHitPoints(int hitPoints);
	void setEnergy(int energy);
	void setAttack(int attack);
};

void setColor(const std::string &color);

#endif