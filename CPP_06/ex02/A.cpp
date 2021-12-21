/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:34:50 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 17:39:01 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A :: A(void) {}
A :: ~A(void) {}
A :: A(const A & other) {*this = other; }

A  & A :: operator=(const A & other) {
	static_cast<void>(other);
	return *this;
}