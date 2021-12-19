#include "Character.hpp"

Character :: Character(void) : name(""), numberOfMateria(0) {
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
    std :: cout << "Charcter: Default constructor called" << std :: endl;
}

Character :: Character(const Character &other) {
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
    *this = other;
    std :: cout << "Character: Copy constructor called" << std :: endl;
}

Character :: ~Character(void) {
    std :: cout << "Character: Destructor called" << std :: endl;
}

Character :: Character(std :: string _name) : name(_name), numberOfMateria(0) {
    std :: cout << "Character: Initialisation constructor called" << std:: endl;
}

Character   &Character :: operator=(const Character &other) {
    if (this != &other) {
        numberOfMateria =0;
        for (int i = 0; i < 4; i++) {
            if (other.materias[i])
                numberOfMateria++;
            if (materias[i])
                delete  materias[i];
            materias[i] = other.materias[i];
        }
        name = other.getName();
    }
    std :: cout << "Character: Assignature operator called" << std :: endl;
    return *this;
}

std :: string const  &Character :: getName() const {
    return name;
}

void    Character :: equip(AMateria *m) {
    if (numberOfMateria == 4) {
        std :: cout << "Unable to equip this materia" << std :: endl;
        return ;
    }
    materias[numberOfMateria] = m;
    numberOfMateria++;
    std :: cout << "Successfully equipped" << std :: endl;
}

void    Character :: unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std :: cout << "Wrong index" << std :: endl;
        return ;
    }
    if (!materias[idx]) {
        std :: cout << "No such Materia" << std :: endl;
        return ;
    }
    idx++;
    for (; idx < 4 && materias[idx]; idx++)
        materias[idx - 1] = materias[idx];
    materias[idx] = NULL;
    std :: cout << "Successfully unequipped" << std :: endl;
}

void    Character :: use(int idx, ICharacter    &target) {
    if (idx < 0 || idx > 3) {
        std :: cout << "Wrong index" << std :: endl;
        return ;
    }
    if (!materias[idx]) {
        std :: cout << "No such Materia" << std :: endl;
        return ;
    }
    materias[idx]->use(target);
    this->unequip(idx);
}
