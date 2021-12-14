/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:46:23 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 17:31:44 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*Misha, *Liza;

	Misha = newZombie("Misha");
	Misha->announce();
	delete Misha;
	Liza = newZombie("Liza");
	Liza->announce();
	delete Liza;
	randomChump("Nadia");
	randomChump("Sasha");
	return 0;
}
