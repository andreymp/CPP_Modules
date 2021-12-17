/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:59:37 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 13:26:50 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream> 

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std :: string	_name);
		ClapTrap(const ClapTrap	&other);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap	&other);
		void			attack(std :: string const	&target);
		void			takeDamage(unsigned int	amount);
		void			beRepaired(unsigned int amount);
		unsigned int	getHitpoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttacDamage(void) const;
		std :: string	getName(void) const;
	private:
		unsigned int	hitpoints;
		unsigned int	energy;
		unsigned int	attackDamage;
		std :: string	name;
};

#endif