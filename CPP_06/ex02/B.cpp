/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:34:52 by jobject           #+#    #+#             */
/*   Updated: 2021/12/21 17:41:04 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B :: B(void) {}
B :: ~B(void) {}
B :: B(const B & other) {*this = other; }

B  & B :: operator=(const B & other) {
	static_cast<void>(other);
	return *this;
}