/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:31:20 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 21:02:28 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog(void) {
	type = "Dog";
	brain = new Brain();
	std :: cout << "Dog: Default constructor called" << std :: endl;
}

Dog :: Dog(const Dog &other) {
	*this = other;
	std :: cout << "Dog: Copy constructor called" << std :: endl;
}

Dog :: ~Dog(void) {
	delete brain;
	std :: cout << "Dog: Destructor called" << std :: endl;
}

Dog	&Dog :: operator=(const Dog &other) {
	if (this != &other) {
		type = other.getType();
		*brain = *other.getBrain();
	}
	std :: cout << "Dog: Asignature operator called" << std :: endl;
	return *this;
}

Animal	&Dog :: operator=(const Animal	&other) {
	std :: cout << "Animal dog: Asignature operator called" << std :: endl;
	if (this != &other) {
		type = other.getType();
		*brain = *other.getBrain();
	}
	return *this;
}

void	Dog :: makeSound(void) const {
	std :: cout << "Wwwwwwaaaffffff...." << std :: endl;
}

Brain	*Dog :: getBrain(void) const {
	return brain;
}