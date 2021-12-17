/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:41:18 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 19:43:04 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain(void) {
	std :: cout << "Brain: Default constructor called" << std :: endl;
}

Brain :: Brain(const Brain &other) {
	*this = other;
	std :: cout << "Brain: Copy constructor called" << std :: endl;
}

Brain :: ~Brain(void) {
	std :: cout << "Brain: Destructor called" << std :: endl;
}

Brain	&Brain :: operator=(const Brain	&other) {
	std :: cout << "Animal: Asignature operator called" << std :: endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}
