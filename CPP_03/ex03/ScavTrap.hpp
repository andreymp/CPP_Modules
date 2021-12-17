/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:37:01 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:27:37 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
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