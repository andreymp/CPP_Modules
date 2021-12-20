/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:07:14 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 15:42:06 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat(void) : name(""), grade(150) {
	std :: cout << "Bureaucrat: Default constructor called" << std :: endl;
}

Bureaucrat :: Bureaucrat(std :: string _name, int _grade) : name(_name), grade(_grade) {
	std :: cout << "Bureaucrat: Initialisation constructor called" << std :: endl;
	checkGrade();
}

Bureaucrat :: Bureaucrat(const Bureaucrat &other) {
	*this = other;
	std :: cout << "Bureaucrat: Copy constructor called" << std :: endl;
}

Bureaucrat :: ~Bureaucrat(void) {
	std :: cout << "Bureaucrat: Destructor called" << std :: endl;
}

Bureaucrat	&Bureaucrat :: operator=(const Bureaucrat &other) {
	if (this != &other)
		grade = other.getGrade();
	std :: cout << "Bureaucrat: Assignature operator called" << std :: endl;
	return *this;
}

std :: string const	&Bureaucrat :: getName(void) const {
	return name;
}

int	Bureaucrat :: getGrade(void) const {
	return grade;
}

void	Bureaucrat :: incGrade(void) {
	grade--;
	checkGrade();
}

void	Bureaucrat :: decGrade(void) {
	grade++;
	checkGrade();
}

void	Bureaucrat :: checkGrade(void) const {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException(); 
}

const char *Bureaucrat :: GradeTooHighException :: what(void) const throw() {
	return "Out of range: Grade to high";
}

const char *Bureaucrat :: GradeTooLowException :: what(void) const throw() {
	return "Out of range: Grade to low";
}

void	Bureaucrat :: signForm(Form	&f) const {
	if (!f.getFlag() && grade <= f.getGradeSign() && grade <= f.getGradeExec()) {
		std :: cout << name << " signes " << f.getName() << std :: endl;
		f.beSigned(*this);
	} else
		std :: cout << name << " cannot sign " << f.getName() 
		<< " because this form already signed or it cannot be signed due to its value" << std :: endl;
}

std :: ostream	&operator<<(std :: ostream &stream, const Bureaucrat &other) {
	stream << other.getName() << ", bureaucrat grade " << other.getGrade() << std :: endl;
	return stream;
}
