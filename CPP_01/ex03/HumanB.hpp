/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:35 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 19:02:30 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(void);
		HumanB(std :: string _name);
		~HumanB(void);
		void	setWeapon(Weapon	*_weapon);
		void attack(void) const;
	private:
		std :: string 	name;
		Weapon			*weapon;
};

#endif
