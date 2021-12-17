/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:53:38 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 13:53:46 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(void) {	
	hitpoints = 100;
	energy = 50;
	attackDamage = 20;
	std :: cout << "ScavTrap: Default constructor called" << std :: endl;
}

ScavTrap :: ScavTrap(std :: string _name) {
	name = _name;
	hitpoints = 100;
	energy = 50;
	attackDamage = 20;
	std :: cout << "ScavTrap: Initialisaion constructor called" << std :: endl;
}

ScavTrap :: ScavTrap(const ScavTrap	&other) {
	std :: cout << "ScavTrap: Copy constructor called" << std :: endl;
	*this = other;
}

ScavTrap :: ~ScavTrap(void) {
	std :: cout << "ScavTrap: Destructor called" << std :: endl;
}

ScavTrap	&ScavTrap :: operator=(const ScavTrap	&other) {
	std :: cout << "ScavTrap Assigment oerator called" << std :: endl;
	if (this != &other) {
		hitpoints = other.getHitpoints();
		energy = other.getEnergy();
		attackDamage = other.getAttacDamage();
		name = other.getName();
	}
	return (*this);
}

void	ScavTrap :: attack(std :: string const	&target) { 
	std :: cout << "ScavTrap " << name << " attack " << target
		<< ", causing " << hitpoints << " points of damage" << std :: endl;
}

void	ScavTrap :: guardGate(void) {
	std :: cout << "ScavTrap: " << name << " have enetered in Gate keeper mode" << std :: endl;
}
