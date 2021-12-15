/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:46:14 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 11:58:46 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen :: Karen(void) {}
Karen :: ~Karen(void) {};

void	Karen :: debug(void) const {
	std :: cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std :: endl;
}

void	Karen :: info(void) const {
	std :: cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std :: endl;
}

void	Karen :: warning(void) const { 
	std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std :: endl;
}

void	Karen :: error(void) const {
	std :: cout << "This is unacceptable, I want to speak to the manager now." << std :: endl;
}

void	Karen :: complain(std :: string level) {
	std :: string complainLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen :: *forComlain[])(void) const = {
		&Karen :: debug,
		&Karen :: info,
		&Karen :: warning,
		&Karen :: error
	};
	int i;

	for (i = 0; i < 4 && complainLevels[i] != level; i++);
	switch (i) {
		case 0:
			std :: cout << "[ DEBUG ]" << std :: endl;
			(this->*forComlain[0])();
		case 1:
			std :: cout << "[ INFO ]" << std :: endl;
			(this->*forComlain[1])();
		case 2:
			std :: cout << "[ WARNING ]" << std :: endl;
			(this->*forComlain[2])();
		case 3:
			std :: cout << "[ ERROR ]" << std :: endl;
			(this->*forComlain[3])();
			break ;
		default:
			std :: cerr << "[ Probably complaining about insignificant problems ]" << std :: endl; 
	}
}