/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:31:09 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 20:21:15 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat	&other);
		~Cat(void);
		Cat	&operator=(const Cat	&other);
		virtual Brain	*getBrain(void) const;
		virtual void	makeSound(void) const;
	private:
		Brain	*brain;
};

#endif