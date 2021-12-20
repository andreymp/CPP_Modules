/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:03:52 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 14:05:16 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std :: string _name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &other);
		std :: string const	&getName(void) const;
		int					getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);
		class GradeTooLowException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooHighException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
	private:
		void	checkGrade(void) const;
		std :: string const	name;
		int					grade;
};

std :: ostream	&operator<<(std :: ostream &stream, const Bureaucrat &other);

#endif