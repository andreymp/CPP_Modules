/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:48:20 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 18:38:39 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	{
		Bureaucrat	b("bob", 140);
		Form *sh = new ShrubberyCreationForm();
		b.executeForm(*sh);
		delete sh;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 15);
		Form *putin = new PresidentialPardonForm();
		b.executeForm(*putin);
		delete putin;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 60);
		Form *rob = new RobotomyRequestForm();
		b.executeForm(*rob);
		delete rob;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	a("nadia", 2);
		Bureaucrat	b("vladimir", 1);
		Bureaucrat	c("alena", 2);

		Form	*trees = new RobotomyRequestForm("push_swap");
		a.executeForm(*trees);
		delete trees;
		Form	*robot = new ShrubberyCreationForm("Christmas");
		c.executeForm(*robot);
		delete robot;
		Form	*volodya = new PresidentialPardonForm("Russia");
		b.executeForm(*volodya);
		delete volodya;
	}
	return 0;
}
