/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:21 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:24:21 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice(void);
        Ice(const Ice &other);
        ~Ice(void);
        Ice &operator=(const Ice &other);
        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter& target);
};

#endif