/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:12:17 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 14:07:07 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	{
		ScavTrap scav("Scav");
		ScavTrap anotherScav;

		scav.guardGate();
		scav.attack("Clap");
		scav.takeDamage(25);
		scav.beRepaired(3);
		anotherScav = scav;
		anotherScav.takeDamage(30);
		anotherScav.beRepaired(5);
	}
	std :: cout << "------------------------------------------" << std ::endl;
	{
		ClapTrap clap("Clap");

		clap.attack("enemy");
		clap.takeDamage(9);
		clap.beRepaired(1);
		clap.takeDamage(10);
		clap.beRepaired(2);
	}
	return 0;
}
