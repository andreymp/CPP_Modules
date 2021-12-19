#include "Cure.hpp"

Cure :: Cure(void) : AMateria("cure") {
    std :: cout << "Cure: Default constructor called" << std :: endl;
}

Cure :: Cure(const Cure    &other) : AMateria("cure") {
    *this = other;
    std :: cout << "Cure: Copy constructor called" << std :: endl;
}

Cure :: ~Cure(void) {
    std :: cout << "Cure: Destructor called" << std :: endl;
}

Cure &Cure :: operator=(const Cure &other) {
    if (this != &other)
        type = other.getType();
    std :: cout << "Cure: Assignature operator called" << std :: endl;
    return *this;
}

AMateria    *Cure :: clone(void) const {
    return new Cure(*this);
}

void    Cure :: use(ICharacter   &target) {
    std :: cout << "* heals " << target.getName() << "\'s wound*" << std :: endl;
}