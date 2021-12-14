/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:13:43 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 18:35:36 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	public:
		Weapon(void);
		Weapon(std :: string _type);
		~Weapon(void);
		void				setType(std :: string _type);
		const std :: string	&getType(void) const;
	private:
		std	:: string type;
};

#endif