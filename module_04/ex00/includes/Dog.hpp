/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:20:24 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/11 03:28:39 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const &src);
	~Dog();

	void makeSound() const;

	Dog &operator=(Dog const &rhs);
};

#endif /* ************************************************************* DOG_H */