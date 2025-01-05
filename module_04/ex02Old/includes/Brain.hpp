/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:57:33 by tsofien-          #+#    #+#             */
/*   Updated: 2024/12/19 08:46:40 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "utils.hpp"

class Brain
{

public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);
	std::string *getIdeas() const;
	void setIdea(int index, std::string idea);

private:
	std::string _ideas[100];
};

#endif /* *********************************************************** BRAIN_H */