/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:20:18 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/12 20:03:33 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "utils.hpp"

class Animal
{
public:
	Animal();
	Animal(const std::string &type);
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const = 0;

	std::string getType() const;
	void setType(std::string type);

protected:
	std::string _type;
};

#endif /* ********************************************************** ANIMAL_H */