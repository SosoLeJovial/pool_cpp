/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:15:13 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 18:56:33 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
// ************************************************************************** //
//                               Zombie Class                                //
// ************************************************************************** //

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(const std::string name);
	~Zombie();
	void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

// ************************************************************************** //
#endif