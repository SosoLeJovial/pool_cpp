/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:20:24 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/19 21:12:39 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog &operator=(Dog const &rhs);

	virtual void makeSound() const;

private:
	Brain *_brain;
};

#endif /* ************************************************************* DOG_H */