/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:51:12 by jobject           #+#    #+#             */
/*   Updated: 2021/12/14 20:59:45 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen {
	public:
		Karen(void);
		~Karen(void);
		void	complain(std :: string level);
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif