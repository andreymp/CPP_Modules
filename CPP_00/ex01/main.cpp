#include "PhoneBook.hpp"

int main(void) {
    PhoneBook   book;
    std :: string option;
    bool flag = true;
    int i = 0, size = 0;

    std :: cout << "Choose option" << std :: endl;
    while (flag) {
        std :: cin >> option;
        if (option == "EXIT") {
            book.makeExit();
            flag = false;
        }
        else if (option == "ADD") {
            book.makeAdd(&i);
            if (size < i)
                size = i;
        }
        else if (option == "SEARCH")
            book.makeSearch(size);
        else {
            std :: cout << "Wrong option" << std :: endl;
            std :: cout << "Available: EXIT, SEARCH, ADD" << std :: endl;
        }
    }
    return 0;
}
