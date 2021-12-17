/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:30:44 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 20:40:03 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal	&other);
		virtual ~Animal(void);
		Animal	&operator=(const Animal	&other);
		std :: string	getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std :: string type;
};

#endif