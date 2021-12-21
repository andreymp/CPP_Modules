/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:29:40 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 19:40:28 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *arr, int len, void (*f)(T const &)) {
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

#endif