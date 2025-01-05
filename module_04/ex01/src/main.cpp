/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:50:55 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/05 19:49:09 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>

int main()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Cat *cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound(); // will output the cat sound!
	meta->makeSound();

	const Cat bv = *cat;
	for (size_t i = 0; i < 100; i++)
	{
		bv.setBrain(i, "Idea " + std::to_string(i));
	}

	// bv.getBrain();

	delete meta;
	delete dog;
	delete cat;

	const Cat *lopotichat = new Cat();

	lopotichat->makeSound();

	delete lopotichat;

	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrong_cat = new WrongCat();

	wrong->makeSound();
	wrong_cat->makeSound();

	delete wrong;
	delete wrong_cat;
	return 0;
}
