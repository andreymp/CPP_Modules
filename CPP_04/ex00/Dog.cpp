/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:39:46 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 17:54:30 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog(void) {
	type = "Dog";
	std :: cout << "Dog: Default constructor called" << std :: endl;
}

Dog :: Dog(const Dog &other) {
	*this = other;
	std :: cout << "Dog: Copy constructor called" << std :: endl;
}

Dog :: ~Dog(void) {
	std :: cout << "Dog: Destructor called" << std :: endl;
}

Dog	&Dog :: operator=(const Dog &other) {
	if (this != &other)
		type = other.getType();
	std :: cout << "Dog: Asignature operator called" << std :: endl;
	return *this;
}

void	Dog :: makeSound(void) const {
	std :: cout << "Wwwwwwaaaffffff...." << std :: endl;
}