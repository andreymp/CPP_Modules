/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:11:03 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 17:56:32 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal(void) {
	std :: cout << "Animal: Default constructor called" << std :: endl;
}

Animal :: Animal(const Animal &other) {
	*this = other;
	std :: cout << "Animal: Copy constructor called" << std :: endl;
}

Animal :: ~Animal(void) {
	std :: cout << "Animal: Destructor called" << std :: endl;
}

Animal	&Animal :: operator=(const Animal	&other) {
	std :: cout << "Animal: Asignature operator called" << std :: endl;
	if (this != &other)
		type = other.getType();
	return *this;
}

std :: string	Animal :: getType(void) const {
	return type;
}

void	Animal :: makeSound(void) const {
	std :: cout << "I do not know what the Animal is I, so I do not have unique sound :(" << std :: endl;
}
