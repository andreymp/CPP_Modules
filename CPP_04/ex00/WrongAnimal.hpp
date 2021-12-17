/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:41:05 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 18:44:01 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal	&other);
		~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal	&other);
		std :: string	getType(void) const;
		void	makeSound(void) const;
	protected:
		std :: string type;
};

#endif