/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:41:15 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 18:48:36 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal(void) {
	std :: cout << "WrongAnimal: Default constructor called" << std :: endl;
}

WrongAnimal :: WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std :: cout << "WrongAnimal: Copy constructor called" << std :: endl;
}

WrongAnimal :: ~WrongAnimal(void) {
	std :: cout << "WrongAnimal: Destructor called" << std :: endl;
}

WrongAnimal	&WrongAnimal :: operator=(const WrongAnimal	&other) {
	std :: cout << "WrongAnimal: Asignature operator called" << std :: endl;
	if (this != &other)
		type = other.getType();
	return *this;
}

std :: string	WrongAnimal :: getType(void) const {
	return type;
}

void	WrongAnimal :: makeSound(void) const {
	std :: cout << "I do not know what the Animal is I, so I do not have unique sound :( wrongyyy" << std :: endl;
}
