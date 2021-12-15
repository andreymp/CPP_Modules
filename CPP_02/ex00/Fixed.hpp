/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:09:11 by jobject           #+#    #+#             */
/*   Updated: 2021/12/15 13:53:50 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed	&other);
		~Fixed(void);
		Fixed	&operator=(const Fixed	&other);
		int		getRawBits(void) const;
		void	setRawBits(int const	_intToConvert);
	private:
		int					intToConvert;
		static int const	raw = 8;
};

#endif