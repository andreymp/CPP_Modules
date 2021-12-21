/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:20:35 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 16:14:39 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char	**argv) {
	if (argc != 2) {
		std :: cerr << "Wrong input!" << std :: endl;
		return 1;
	}
	try {
		std :: string	input(argv[1]);
		Convert			convert(input);
		convert.excep();
		convert.print();
	}
	catch (std :: exception & e) {
		std :: cout << e.what() << std :: endl;
	}
	return 0;
}