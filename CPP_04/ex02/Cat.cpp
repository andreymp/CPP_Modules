/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:30:58 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 20:47:43 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat(void) {
	type = "Cat";
	brain = new Brain();
	std :: cout << "Cat: Default constructor called" << std :: endl;
}

Cat :: Cat(const Cat &other) {
	*this = other;
	std :: cout << "Cat: Copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
	delete brain;
	std :: cout << "Cat: Destructor called" << std :: endl;
}

Cat	&Cat :: operator=(const Cat &other) {
	if (this != &other) {
		type = other.getType();
		*brain = *other.getBrain();
	}
	std :: cout << "Cat: Asignature operator called" << std :: endl;
	return *this;
}

Animal	&Cat :: operator=(const Animal	&other) {
	std :: cout << "Animal cat: Asignature operator called" << std :: endl;
	if (this != &other) {
		type = other.getType();
		*brain = *other.getBrain();
	}
	return *this;
}

void	Cat :: makeSound(void) const {
	std :: cout << "Meoooowwwww...." << std :: endl;
}

Brain	*Cat :: getBrain(void) const {
	return brain;
}