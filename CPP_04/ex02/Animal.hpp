/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:30:44 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 21:39:12 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		virtual ~Animal(void);
		virtual Animal	&operator=(const Animal	&other) = 0;
		std :: string	getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std :: string type;
};

#endif