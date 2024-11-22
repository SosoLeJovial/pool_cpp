/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:48:21 by tsofien-          #+#    #+#             */
/*   Updated: 2024/11/22 17:27:21 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
		void   complain(std::string level);
};

#endif	// HARL_HPP