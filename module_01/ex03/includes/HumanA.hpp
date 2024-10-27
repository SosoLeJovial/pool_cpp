/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:32:36 by tsofien-          #+#    #+#             */
/*   Updated: 2024/10/27 22:42:20 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		/* data */
	public:
		HumanA(/* args */);
		~HumanA();
		void	setWeapon(Weapon the_weapon);
		void	attack();

};


#endif