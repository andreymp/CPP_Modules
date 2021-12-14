/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobject <jobject@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:19:12 by jobject           #+#    #+#             */
/*   Updated: 2021/12/13 12:19:12 by jobject          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define RED "\033[1;31m"

int main(int argc, char **argv)
{
    if (argc == 1) {
        std :: cout << RED"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        std :: string av(argv[i]);
        for (size_t j = 0; j < av.size(); j++)
            std :: cout << (char) std :: toupper(av[j]);
    }
    std :: cout << std :: endl;
    return 0;
}
