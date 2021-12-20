/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:47 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:23:47 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
    public:
        AMateria(std::string const & type);
        virtual ~AMateria(void);
        std :: string const &getType(void) const;
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter& target) = 0;
    protected:
        std :: string   type;
};

#endif
