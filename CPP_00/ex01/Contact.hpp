/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:19:19 by jobject           #+#    #+#             */
/*   Updated: 2021/12/13 12:19:19 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        void    setFirtsName(std :: string _name);
        void    setLastName(std :: string _last);
        void    setSecret(std :: string _secret);
        void    setNick(std :: string _nickname);
        void    setNumber(long long num);
        std :: string   getFirtsName(void) const;
        std :: string   getLastName(void) const;
        std :: string   getSecret(void) const;
        std :: string   getNick(void) const;
        long long       getNumber(void) const;
    private:
        std :: string   firstName;
        std :: string   lastName;
        std :: string   darkestSecret;
        std :: string  	nickname;
        long long       phoneNumber;     
};

#endif