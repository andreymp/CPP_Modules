/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:19 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 18:19:22 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std :: string _name);
		~Zombie(void);
		void	announce(void) const;
	private:
		std :: string name;
};

Zombie	*newZombie(std :: string name);
void	randomChump(std :: string name);

#endif 