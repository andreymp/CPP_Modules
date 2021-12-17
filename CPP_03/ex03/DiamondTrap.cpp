/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:35:13 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:34:30 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap(void) : name(ClapTrap :: name){
	ClapTrap::name += "_clap_name";
	hitpoints = FragTrap::hitpoints;
	energy = ScavTrap::energy;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap :: DiamondTrap(const DiamondTrap &other) {
	*this = other;
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap :: DiamondTrap(std :: string	_name): ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name), name(_name) {
	ClapTrap::name += "_clap_name";
	DiamondTrap::hitpoints = FragTrap::hitpoints;
	energy = ScavTrap:: energy;
	DiamondTrap::attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: Initialisation constructor called" << std::endl;
}

DiamondTrap:: ~DiamondTrap(void) {
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap :: operator=(const DiamondTrap	&other) {
	std::cout << "DiamondTrap Assigment oerator called" << std::endl;
	if (this != &other) {
		hitpoints = other.getHitpoints();
		energy = other.getEnergy();
		attackDamage = other.getAttacDamage();
		name = other.getName();
		if (!ClapTrap::name.find("_clap_name"))
			ClapTrap::name = name + "_clap_name";
	}
	return (*this);
}

void	DiamondTrap :: attack(std :: string const	&target) {
	ScavTrap :: attack(target);
}

void	DiamondTrap :: whoAmI(void) {
	std :: cout  << "DiamondTrap: My name is " << name << ", My grandfather\'s name is "
		<< ClapTrap::name << std :: endl;
}
