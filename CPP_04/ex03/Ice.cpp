/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:02 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:24:02 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice :: Ice(void) : AMateria("ice") {
    std :: cout << "Ice: Default constructor called" << std :: endl;
}

Ice :: Ice(const Ice    &other) : AMateria("ice") {
    *this = other;
    std :: cout << "Ice: Copy constructor called" << std :: endl;
}

Ice :: ~Ice(void) {
    std :: cout << "Ice: Destructor called" << std :: endl;
}

Ice &Ice :: operator=(const Ice &other) {
    if (this != &other)
        type = other.getType();
    std :: cout << "Ice: Assignature operator called" << std :: endl;
    return *this;
}

AMateria    *Ice :: clone(void) const {
    return new Ice(*this);
}

void    Ice :: use(ICharacter   &target) {
    std :: cout << "* shoots an ice bolt at " << target.getName() << " *" << std :: endl;
}