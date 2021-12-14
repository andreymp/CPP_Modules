/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:20:16 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 18:19:36 by jobject          ###   ########.fr       */
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
		void	setName(std :: string _name);
		void	announce(void) const;
	private:
		std :: string name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif 