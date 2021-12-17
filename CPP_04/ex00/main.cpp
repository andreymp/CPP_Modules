/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:56:43 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 19:27:39 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	std :: cout << "---RIGHT OUTPUT---" << std :: endl;
	{
		Animal* meta = new Animal();
		Animal* j = new Dog();
		Animal* i = new Cat();

		std::cout << j->getType() << std::endl;
		j->makeSound();
		delete j;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		delete i;
		meta->makeSound();
		delete meta;
	}
	std :: cout << "---WRONG OUTPUT---" << std :: endl;
	{
		WrongAnimal	*smth = new WrongAnimal();
		WrongAnimal *cat = new WrongCat();
		
		smth->makeSound();
		std :: cout << cat->getType() << std :: endl;
		cat->makeSound();
		delete cat;
		delete smth;
	}
	return (0);
}