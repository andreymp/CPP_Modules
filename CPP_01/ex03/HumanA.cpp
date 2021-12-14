/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:28 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 18:44:15 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std :: string _name, Weapon	&_weapon) : name(_name), weapon(_weapon) {}
HumanA :: ~HumanA(void) {}

void	HumanA :: attack(void) const {
	std :: cout << name << " attacks with his " << weapon.getType() << std :: endl;
}
