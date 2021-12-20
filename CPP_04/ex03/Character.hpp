/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:53 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:23:53 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
    public:
        Character(void);
        Character(const Character &other);
        Character(std :: string _name);
        ~Character(void);
        Character   &operator=(const Character  &other);
        virtual std::string const   &getName() const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
    private:
        std :: string   name;
        AMateria        *materias[4];
        size_t          numberOfMateria;
};

#endif