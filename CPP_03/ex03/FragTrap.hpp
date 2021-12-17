/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:36:32 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:27:18 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp" 

class FragTrap : public virtual ClapTrap {
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