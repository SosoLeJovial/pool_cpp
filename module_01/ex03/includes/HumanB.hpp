/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:32:15 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/28 00:06:25 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB();
		HumanB(const std::string name);
		~HumanB();
		void	setWeapon(Weapon the_weapon);
		void	attack();

};


#endif