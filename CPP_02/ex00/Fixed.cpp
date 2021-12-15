/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:39:40 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 13:54:03 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed(void) : intToConvert(0) {
	std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: ~Fixed(void) {
	std :: cout << "Destructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed	&others) {
	std :: cout << "Copy constructor called" << std :: endl;
	*this = others;
}

Fixed	&Fixed :: operator=(const Fixed	&other) {
	std :: cout << "Assignation operator called" << std :: endl;
	if (this != &other)
		this->intToConvert = other.getRawBits();
	return *this;
}

int	Fixed :: getRawBits(void) const {
	std :: cout << "getRawBits member function called" << std :: endl;
	return intToConvert;
}

void	Fixed :: setRawBits(int const	_intToConvert) {
	std :: cout << "setRawBits member function called" << std :: endl;
	Fixed :: intToConvert = _intToConvert;
}
