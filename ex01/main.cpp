/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:12:51 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 12:45:07 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(){
	PhoneBook libro;
	std::string str = "carajos";

	std::cout << "Welcome to my phonebook " << std:: endl;
	while (1 && std::cin)
	{
		std::cout << "Options: ADD  |  SEARCH  | EXIT  " << std:: endl << " > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			libro.add();
		else if (str == "SEARCH")
			libro.search();
		else if (str == "EXIT")
			break ;
	}
	return (0);
}