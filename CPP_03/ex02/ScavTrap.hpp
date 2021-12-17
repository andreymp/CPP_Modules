/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:54:09 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 13:54:11 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap	&other);
		ScavTrap(std :: string _name);
		~ScavTrap(void);
		void		attack(std :: string const	&target);
		ScavTrap	&operator=(const ScavTrap	&other);
		void		guardGate(void);
};

#endif