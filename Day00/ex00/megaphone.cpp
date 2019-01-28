/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelikia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:47:55 by amelikia          #+#    #+#             */
/*   Updated: 2019/01/21 13:48:39 by amelikia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *strtoupper(char *str)
{
	int i;

    i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
    return str;
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			std::cout << strtoupper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
