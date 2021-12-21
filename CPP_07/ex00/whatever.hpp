/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:38:14 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 18:48:25 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b) {
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	&min(T &a, T &b) {
	return a < b ? a : b;
}

template <typename T>
T	&max(T &a, T &b) {
	return a > b ? a : b;
}

#endif