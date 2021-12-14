/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:07:02 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 16:54:07 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(void) {}

Zombie :: Zombie(std :: string _name) : name(_name) {} 

Zombie :: ~Zombie(void) {
	std :: cout << name << " has gone" << std :: endl;
}

void	Zombie :: announce(void) const{
	std :: cout << name << " BraiiiiiiinnnzzzZ..." << std :: endl;
}
