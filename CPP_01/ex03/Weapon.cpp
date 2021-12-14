/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:40 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 19:15:45 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon :: Weapon(void) {}

Weapon :: ~Weapon(void) {}

Weapon :: Weapon(std :: string _type) : type(_type) {}

void	Weapon :: setType(std :: string _type) {
	if (_type != "")
		Weapon :: type = _type;
}

const std :: string	&Weapon :: getType(void) const {
	return this->type;
}
