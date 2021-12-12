#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void) = default;
        PhoneBook(const PhoneBook   &others);
        ~PhoneBook(void) = default;
        void    makeExit(void) const;
        void    makeAdd(int *index);
        void    makeSearch(int size) const;
    private:
        Contact contacts[8];
        void    show(int size) const;
};

#endif