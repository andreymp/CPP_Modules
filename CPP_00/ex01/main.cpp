/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:19:22 by jobject           #+#    #+#             */
/*   Updated: 2021/12/13 12:19:22 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
    PhoneBook   book;
    std :: string option;
    bool flag = true;
    int i = 0, size = 0;

    std :: cout << "Choose option" << std :: endl;
    while (flag) {
        if (!(std :: cin >> option))
			flag = false;
        else if (option == "EXIT") {
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
