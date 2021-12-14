/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:20:09 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 17:33:52 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*zombs = zombieHorde(10, "One of clone ");

	for (int i = 0; i < 10; i++)
		zombs[i].announce();
	delete [] zombs;
	return 0;
}