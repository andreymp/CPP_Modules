/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:04:15 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 15:46:39 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	{
		DiamondTrap	diamond("Diamond");

		diamond.whoAmI();
		diamond.highFiveGuys();
		diamond.guardGate();
		diamond.attack("Frag");
		diamond.takeDamage(25);
		diamond.beRepaired(3);
		diamond.takeDamage(30);
		diamond.beRepaired(5);
	}
	std :: cout << "------------------------------------------" << std ::endl;
	{
		FragTrap frag("Frag");

		frag.highFiveGuys();
		frag.attack("Scav");
		frag.takeDamage(90);
		frag.beRepaired(3);
		frag.takeDamage(50);
		frag.beRepaired(5);
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