/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:51:15 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 11:57:19 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen	karen;

	if (argc != 2) {
		std :: cerr << "Wrong number of arguments" << std :: endl;
		return 1;
	}
	std :: string level(argv[1]);
	karen.complain(level);
	return 0;
}