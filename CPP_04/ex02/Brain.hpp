/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:37:11 by jobject           #+#    #+#             */
/*   Updated: 2021/12/17 19:40:46 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream> 

class Brain {
	public:
		Brain(void);
		Brain(const Brain	&other);
		~Brain(void);
		Brain	&operator=(const Brain	&other);
		std :: string	ideas[100];
};

#endif
