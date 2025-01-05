/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:58:44 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/05 19:33:14 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();

	void makeSound() const;
	Cat &operator=(Cat const &rhs);

	const Brain &getBrain(void) const;
	void setBrain(int index, std::string idea);

private:
	Brain *_brain;
};

#endif /* ************************************************************* CAT_H */