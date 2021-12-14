/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:33 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 18:57:34 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(void) {}
HumanB :: HumanB(std :: string _name) : name(_name), weapon(NULL) {}
HumanB :: ~HumanB(void) {}

void	HumanB :: attack(void) const {
	if (weapon)
		std :: cout << name << " attacks with his " << weapon->getType() << std :: endl;
	else
		std :: cout << name << " cannot attack" << std :: endl;
}

void	HumanB :: setWeapon(Weapon *_weapon) {
	HumanB :: weapon = _weapon;
}