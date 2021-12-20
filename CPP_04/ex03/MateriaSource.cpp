/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:34 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:24:34 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource :: MateriaSource(void) : numberOfMat(0) {
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std :: cout << "MateriaSource: Default constructor called" << std :: endl;
}

MateriaSource :: MateriaSource(const MateriaSource  &other) {
    *this = other;
    std :: cout << "MateriaSource: Copy constructor called" << std :: endl;
}

MateriaSource :: ~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        if (materia[i])
            delete materia[i];
    std :: cout << "MateriaSource: Destructor called" << std :: endl;
}

MateriaSource   &MateriaSource :: operator=(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (materia[i])
                delete materia[i];
            materia[i] = NULL;
            if (other.materia[i])
                materia[i] = other.materia[i]->clone();
        }
    }
    std :: cout << "MateraiSource: Assignature operator called" << std :: endl;
    return *this;
}

void    MateriaSource :: learnMateria(AMateria  *m) {
    if (numberOfMat == 4) {
        std :: cout << "Unable to learn materiaSource" << std :: endl;
        return ;
    }
    materia[numberOfMat++] = m;
    std :: cout << "Succesfully learned" << std :: endl;
}

AMateria    *MateriaSource :: createMateria(std :: string const &type) {
    int i;

    for (i = 0; i < 4 && materia[i]->getType() != type && materia[i]; i++);
    if (i == 4) {
        std :: cout << "No such type of Mteria" << std :: endl;
        return NULL;
    }
    return materia[i]->clone();
}
