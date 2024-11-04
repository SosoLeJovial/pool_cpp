/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:32:20 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/04 22:54:51 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>


class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(const std::string type);
		~Weapon();
		void		setType(const std::string type);
		std::string	getType() const;
};

#endif