/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:59 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 09:23:59 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure(void);
        Cure(const Cure &other);
        ~Cure(void);
        Cure &operator=(const Cure &other);
        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter& target);
};

#endif