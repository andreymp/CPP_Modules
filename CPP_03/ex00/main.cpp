/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:00:29 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 12:39:30 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	First("First");
	ClapTrap	Second("Second");
	ClapTrap	Third;

	First.attack("Second");
	Second.attack("First");
	Second.takeDamage(5);
	First.takeDamage(8);
	Third = First;
	Third.takeDamage(10);
	Third.beRepaired(5);
	Second.beRepaired(12);
	return 0;
}