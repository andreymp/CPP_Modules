/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:36:23 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 16:17:43 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {	
	hitpoints = 100;
	energy = 100;
	attackDamage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std :: string _name) : ClapTrap(_name) {
	name = _name;
	hitpoints = 100;
	energy = 100;
	attackDamage = 30;
	std :: cout << "FragTrap: Initialisaion constructor called" << std :: endl;
}

FragTrap :: FragTrap(const FragTrap	&other) {
	std :: cout << "FragTrap: Copy constructor called" << std :: endl;
	*this = other;
}

FragTrap :: ~FragTrap(void) {
	std :: cout << "FragTrap: Destructor called" << std :: endl;
}

FragTrap	&FragTrap :: operator=(const FragTrap	&other) {
	std :: cout << "FragTrap Assigment oerator called" << std :: endl;
	if (this != &other) {
		hitpoints = other.getHitpoints();
		energy = other.getEnergy();
		attackDamage = other.getAttacDamage();
		name = other.getName();
	}
	return (*this);
}

void	FragTrap :: attack(std :: string const	&target) { 
	std :: cout << "FragTrap " << name << " attack " << target
		<< ", causing " << hitpoints << " points of damage" << std :: endl;
}

void	FragTrap :: highFiveGuys(void) {
	std :: cout << "FragTrap: " << name << " HIGH FIVE Traps :)" << std :: endl;
}
