/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:58:44 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/17 21:58:46 by tsofien-         ###   ########.fr       */
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
	virtual ~Cat();

	Cat &operator=(Cat const &rhs);

private:
};

#endif /* ************************************************************* CAT_H */