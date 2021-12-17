/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:34:49 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:19:31 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap(void) : hitpoints(10), energy(10), attackDamage(0) {
	std :: cout << "ClapTrap: Default constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(std :: string _name) : hitpoints(10), energy(10), attackDamage(0), name(_name) {
	std :: cout << "ClapTrap: Initialisaion constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(const ClapTrap	&other) {
	std :: cout << "ClapTrap: Copy constructor called" << std :: endl;
	*this = other;
}

ClapTrap :: ~ClapTrap(void) {
	std :: cout << "ClapTrap: Destructor called" << std :: endl;
}

ClapTrap	&ClapTrap :: operator=(const ClapTrap	&other) {
	std :: cout << "Clap Trap Assigment oerator called" << std :: endl;
	if (this != &other) {
		hitpoints = other.getHitpoints();
		energy = other.getEnergy();
		attackDamage = other.getAttacDamage();
		name = getName();
	}
	return (*this);
}

unsigned int	ClapTrap :: getHitpoints(void) const {
	return hitpoints;
}

unsigned int	ClapTrap :: getEnergy(void) const {
	return energy;
}

unsigned int	ClapTrap :: getAttacDamage(void) const {
	return attackDamage;
}

std :: string ClapTrap :: getName(void) const {
	return name + "_clap_name";
}

void	ClapTrap :: attack(std :: string const	&target) { 
	std :: cout << "Clap Trap " << name << " attack " << target
		<< ", causing " << hitpoints << " points of damage" << std :: endl;
}

void	ClapTrap :: takeDamage(unsigned int	amount) {
	if (energy <= amount) {
		std :: cout << "ClapTrap: " << this->name << ": Oh, no... I recieved " << amount << " points of damage, but I had "
			<< energy << " points of energy." << "I\'m gone" << std :: endl;
		energy = 0;
	}
	else {
		std :: cout << "ClapTrap: " << name << ": This is not enought to kill me :)" << std :: endl;
		std :: cout << "I have " << energy << " energy points, you damaged me by " << amount <<
			" damage poits!!!" << std :: endl;
		energy -= amount;
	}
}

void	ClapTrap :: beRepaired(unsigned int amount) {
	if (!energy)
		std :: cout << "ClapTrap: " << name << ": I am dead and you are not God to bring me back to life" << std :: endl;
	else {
		energy += amount;
		std :: cout << "ClapTrap: " << name << ": Thanks for this gift :) You gave me " << amount << " e.p and now I have "
			<< energy << " energy points" << std :: endl;
	}
}
