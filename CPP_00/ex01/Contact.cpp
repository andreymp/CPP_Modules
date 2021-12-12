#include "Contact.hpp"

void    Contact :: setFirtsName(std :: string _name) {
    Contact :: firstName = _name;
}

void    Contact :: setLastName(std :: string _last) {
    Contact :: lastName = _last;
}

void    Contact :: setSecret(std :: string _secret) {
    Contact :: darkestSecret = _secret;
}

void    Contact :: setNick(std :: string _nick) {
    Contact :: nickname = _nick;
}

void    Contact :: setNumber(long long _num) {
    Contact :: phoneNumber = _num;
}

std :: string   Contact :: getFirtsName(void) const {
    return firstName;
}

std :: string   Contact :: getNick(void) const {
    return nickname;
}

std :: string   Contact :: getLastName(void) const {
    return lastName;
}

std :: string   Contact :: getSecret(void) const {
    return darkestSecret;
}

long long   Contact :: getNumber(void) const {
    return phoneNumber;
}
