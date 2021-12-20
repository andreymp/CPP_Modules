/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:39 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:23:39 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria(std :: string const &_type) : type(_type) {
    std :: cout << "AMateria: Initialisation constructor called" << std :: endl;
}

std :: string const   &AMateria :: getType(void) const {
    return type;
}

AMateria :: ~AMateria(void) {
    std :: cout << "AMateria: Destructor called" << std :: endl;
}

void    AMateria :: use(ICharacter& target) {(void) target;}
