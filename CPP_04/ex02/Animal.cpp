/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:30:26 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 21:39:01 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: ~Animal(void) {
	std :: cout << "Animal: Destructor called" << std :: endl;
}

std :: string	Animal :: getType(void) const {
	return type;
}

