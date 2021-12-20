/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:03:58 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 14:05:36 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	{
		try {
			Bureaucrat b("bob", 0);
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat a("alice", 156);
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat b("bob", 1);
			std :: cout << b;
			b.incGrade();
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat a("alice", 150);
			std :: cout << a;
			a.decGrade();
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
}