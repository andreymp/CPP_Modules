/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:34:46 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 17:40:17 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C :: C(void) {} 
C :: ~C(void) {}
C :: C(const C & other) {*this = other; }

C  & C:: operator=(const C & other) {
	static_cast<void>(other);
	return *this;
}