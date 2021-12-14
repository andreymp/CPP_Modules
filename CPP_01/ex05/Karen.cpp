/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:51:08 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 21:29:17 by jobject          ###   ########.fr       */
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
	std :: string complainLevels[] = {"debug", "info", "warning", "error"};
	void	(Karen :: *forComlain[])(void) const = {
		&Karen :: debug,
		&Karen :: info,
		&Karen :: warning,
		&Karen :: error
	};
	int i;

	for (i = 0; i < 4 && complainLevels[i] != level; i++);
	switch (i) {
		case 4:
			std :: cerr << "No such level" << std :: endl;
			break ;
		default:
			(this->*forComlain[i])();
	}
}