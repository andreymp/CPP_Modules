/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:19:24 by jobject           #+#    #+#             */
/*   Updated: 2021/12/13 12:19:24 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {}
PhoneBook :: ~PhoneBook(void) {}

void    PhoneBook :: makeExit(void) const{
    std :: cout << "Done exit" << std :: endl;
}

void    PhoneBook :: makeAdd(int *index) {
    std :: string   name, last, secret, sec, n;
    long long       num;

    std :: cout << "First Name: ";
    std :: cin >> name;
    std :: cout << "Last Name: ";
    std :: cin >> last;
    std :: cout << "Phone number: ";
    std :: cin >> n;
    num = std :: stol(n);
    std :: cout << "Nickname: ";
    std :: cin >> secret;
    std :: cout << "darkest Secret: ";
	std :: cin.ignore();
    std :: getline(std :: cin, sec);
    if (*index == 8)
        *index = 0;
    contacts[*index].setFirtsName(name);
    contacts[*index].setLastName(last);
    contacts[*index].setNumber(num);
    contacts[*index].setNick(secret);
    contacts[*index].setSecret(sec);
    (*index)++;
    std :: cout << "Contact added" << std :: endl;
}

static std :: string	makeTemp(std :: string object) {
	std :: string temp(object);

	if (temp.size() > 10) {
		temp.insert(9, ".");
		temp = temp.substr(0, 10);
	}
	return temp;
}

void    PhoneBook :: show(int size) const {
    if (!size) {
        std :: cout << "No contacts in phone book" << std :: endl;
        return ;
    }
    std :: cout << "| " << std :: setw(10) << "index" 
        << " | " << std :: setw(10) << "first name"
        << " | " << std :: setw(10) << "last name"
        << " | " << std :: setw(10) << "nickname"
        << " |" << std :: endl;
    for (int i = 0; i < size; i++) {
        std :: cout << "| " << std :: setw(10) << i + 1
        << " | " << std :: setw(10) << makeTemp(contacts[i].getFirtsName())
        << " | " << std :: setw(10) << makeTemp(contacts[i].getLastName())
        << " | " << std :: setw(10) << makeTemp(contacts[i].getNick())
        << " |" << std :: endl;
    }
}

void    PhoneBook :: makeSearch(int size) const {
    int 			index;
	std :: string	i;

    if (size > 8)
        size = 8;
    this->show(size);
    if (!size)
        return ;
    std :: cout << "Index to seacrh :";
    std :: cin >> i;
	index = std :: stol(i);
    if (index < 1 || index > size) {
        std :: cout << "No such contact" << std :: endl;
        return ;
    }
    std :: cout << "First name: " << contacts[index - 1].getFirtsName() << std :: endl;
    std :: cout << "Last name: " << contacts[index - 1].getLastName() << std :: endl;
    std :: cout << "Nickname: " << contacts[index - 1].getNick() << std :: endl;
    std :: cout << "Phone number: " << contacts[index - 1].getNumber() << std :: endl;
    std :: cout << "Darkest Secret: " << contacts[index - 1].getSecret() << std :: endl;
}
