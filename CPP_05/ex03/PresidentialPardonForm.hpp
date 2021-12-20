/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:14:58 by jobject           #+#    #+#             */
/*   Updated: 2021/12/20 16:59:26 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std :: string _target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm(void);
		PresidentialPardonForm			&operator=(const PresidentialPardonForm &other);
		virtual std :: string const 	&getTarget(void) const;
		virtual void					execute(Bureaucrat const &executor) const;
	private:
		std :: string target;	
};

#endif