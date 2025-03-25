/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:24:04 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 12:43:38 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
//#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	amount = 0;
	flag = 0;
}

PhoneBook::~PhoneBook(){
	std::cout << "Destroyed PhoneBook " << std::endl;
}

void PhoneBook::add(){
	std::string	s = "";
	
	if(amount == 8)
	{
		amount = 7;
		flag = 1;
	}
	Contact new_contact;
	std::cout << "Adding a contact. " << std::endl;

	std::cout << "Input first name: " << std::endl;
	std::getline(std::cin, s);
	new_contact.set_fname(s);
	
	if (s != "")
		std::cout << "Input last name: " << std::endl;
	std::getline(std::cin, s);
	new_contact.set_lname(s);
	
	if (s != "")
		std::cout << "Input nickname: " << std::endl;
	std::getline(std::cin, s);
	new_contact.set_nickname(s);

	if (s != "")
		std::cout << "Input phone: " << std::endl;
	std::getline(std::cin, s);
	new_contact.set_phone(s);
	
	if (s != "")
		std::cout << "Input darkest secret: " << std::endl;
	std::getline(std::cin, s);
	new_contact.set_secret(s);
	
	contacts[amount] = new_contact;
	if (amount <= 7)
		amount++;
}

void PhoneBook::trunc_dot(std::string field){
	std::string aux;
	aux = field.substr(0, 9);
	aux += ".";
	std::cout << aux;
}

void PhoneBook::write_field(std::string field){
	if (field.size() >= 10)
		trunc_dot(field);
	else
	{
		for(unsigned long int i = 0; i < (10 - field.size()); i++)
			std::cout << " ";
		std::cout << field;
	}
}

void PhoneBook::cool_display(){
	int i = 0;
	
	
	if(amount == 8)
	{
		amount = 7;
		flag = 1;
	}
	while (i < amount + flag && std::cin)
	{
		std::cout << "         " << i;
		std::cout << "|";
		write_field(contacts[i].get_fname());
		std::cout << "|";
		write_field(contacts[i].get_lname());
		std::cout << "|";
		write_field(contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}

int ft_stoi(std::string str) {
	std::stringstream ss(str);
	int num = 0;
	ss >> num;  
	return (num);
}

void PhoneBook::search(){
	cool_display();
	std::string str = "alpargata";
	while (1 && std::cin)
	{
		std::cout << "Index of the contact to be displayed: " << std::endl;
		std::getline(std::cin, str);
		if ((str.size() == 1 && str[0] <= '7' && str[0] >= '0') || str == "")
			break ;
	}
	int n = ft_stoi(str);
	if (str != "")
		contacts[n].printcontact();
}
