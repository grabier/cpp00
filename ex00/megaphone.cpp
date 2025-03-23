/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:19:14 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/23 18:42:52 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>

std::string ft_to_upper(std::string s)
{
	for(int i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = std::toupper(s[i]);
	}
	return (s);
}

int main(int argc, char *argv[])
{
	std::string s;
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	
	for(int i = 1; i < argc; i++)
		std::cout << ft_to_upper(argv[i]) << " ";
	std::cout << std::endl;
	return (0);
}