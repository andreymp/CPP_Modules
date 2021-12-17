/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:35:35 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:09:14 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap,  public ScavTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap	&other);
		DiamondTrap(std :: string _name);
		~DiamondTrap(void);
		DiamondTrap	&operator=(const DiamondTrap	&other);
		void		attack(std :: string const &target);
		void		whoAmI(void);
	private:
		std :: string name;
};

#endif