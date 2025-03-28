/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:58:44 by tsofien-          #+#    #+#             */
/*   Updated: 2025/01/11 03:28:34 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const &src);
	~Cat();

	void makeSound() const;
	Cat &operator=(Cat const &rhs);

private:
};

#endif /* ************************************************************* CAT_H */