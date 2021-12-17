/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:47:22 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 18:47:20 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat(void) {
	type = "Cat";
	std :: cout << "Cat: Default constructor called" << std :: endl;
}

Cat :: Cat(const Cat &other) {
	*this = other;
	std :: cout << "Cat: Copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
	std :: cout << "Cat: Destructor called" << std :: endl;
}

Cat	&Cat :: operator=(const Cat &other) {
	if (this != &other)
		type = other.getType();
	std :: cout << "Cat: Asignature operator called" << std :: endl;
	return *this;
}

void	Cat :: makeSound(void) const {
	std :: cout << "Meoooowwwww...." << std :: endl;
}
