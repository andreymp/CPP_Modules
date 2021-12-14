/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:19:27 by jobject           #+#    #+#             */
/*   Updated: 2021/12/13 12:19:27 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    makeExit(void) const;
        void    makeAdd(int *index);
        void    makeSearch(int size) const;
    private:
        Contact contacts[8];
        void    show(int size) const;
};

#endif