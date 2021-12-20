/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:48:20 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 19:38:15 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {
	{
		Bureaucrat	b("bob", 1);
		Form		*sh;
		Intern		intern;

		sh = intern.makeForm("ShrubberyCreationForm", "Christmas");
		b.executeForm(*sh);
		delete sh;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Form 		*putin;
		Intern		intern;
		
		putin = intern.makeForm("PresidentialPardonForm", "Russia");
		b.executeForm(*putin);
		delete putin;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Intern		intern;
		
		Form *rob = intern.makeForm("RobotomyRequestForm", "push_swap");
		b.executeForm(*rob);
		delete rob;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Intern		intern;
		
		Form *rob = intern.makeForm("hello", "push_swap");
		if (rob) {
			b.executeForm(*rob);
			delete rob;
		}
	}
	return 0;
}
