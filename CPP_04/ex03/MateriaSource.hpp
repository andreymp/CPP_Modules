/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:37 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:24:37 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &other);
        ~MateriaSource(void);
        MateriaSource &operator=(const MateriaSource    &other);
        virtual void        learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);
    private:
        AMateria    *materia[4];
        int         numberOfMat;
};

#endif