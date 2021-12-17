/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:54:29 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 13:59:49 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp" 

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const FragTrap	&other);
		FragTrap(std :: string _name);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap	&other);
		void		attack(std :: string const	&target);
		void		highFiveGuys(void);
};

#endif