/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:06:41 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 14:09:34 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	{
		FragTrap frag("Frag");
		FragTrap anotherFrag;

		frag.highFiveGuys();
		frag.attack("Scav");
		frag.takeDamage(90);
		frag.beRepaired(3);
		anotherFrag = frag;
		anotherFrag.takeDamage(50);
		anotherFrag.beRepaired(5);
	}
	std :: cout << "------------------------------------------" << std ::endl;
	{
		ScavTrap scav("Scav");

		scav.guardGate();
		scav.attack("Clap");
		scav.takeDamage(25);
		scav.beRepaired(3);
		scav.takeDamage(30);
		scav.beRepaired(5);
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
