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