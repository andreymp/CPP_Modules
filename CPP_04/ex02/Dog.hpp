/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:31:30 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 21:02:37 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog	&other);
		~Dog(void);
		Dog	&operator=(const Dog	&other);
		virtual Animal &operator=(const Animal	&other);
		virtual Brain	*getBrain(void) const;
		virtual void	makeSound(void) const;
	private:
		Brain	*brain;
};

#endif