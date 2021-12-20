/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:15:03 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 17:10:10 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std :: string _target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(const RobotomyRequestForm &other);
		virtual std :: string const 	&getTarget(void) const;
		virtual void					execute(Bureaucrat const &executor) const;
	private:
		std :: string target;	
};

#endif