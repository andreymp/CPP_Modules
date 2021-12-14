/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:31 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 19:02:03 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std :: string _name, Weapon	&_weapon);
		~HumanA(void);
		void attack(void) const;
	private:
		std :: string	name;	
		Weapon			&weapon;
};

#endif