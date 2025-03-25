/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:11:34 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/24 19:54:19 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

//Constructors
Contact::Contact(){
	//std::cout << "Creating contact " << std::endl;
}

Contact::~Contact(){
	//std::cout << "destroying contact " << std::endl;
}

//Setters
void Contact::set_fname(std::string _fname){
	fname = _fname;
}

void Contact::set_lname(std::string _lname){
	lname = _lname;
}

void Contact::set_nickname(std::string _nickname){
	nickname = _nickname;
}

void Contact::set_phone(std::string _phone){
	phone = _phone;
}

void Contact::set_secret(std::string _secret){
	secret = _secret;
}

//Getters
std::string Contact::get_fname(){
	return (fname);
}

std::string Contact::get_lname(){
	return (lname);
}

std::string Contact::get_nickname(){
	return (nickname);
}

std::string Contact::get_phone(){
	return (phone);
}

std::string Contact::get_secret(){
	return (secret);
}

void Contact::printcontact(){
	std::cout << "First name: " << this->get_fname() << std::endl;
	std::cout << "Last name: " << this->get_lname() << std::endl;
	std::cout << "Nickname: " << this->get_nickname() << std::endl;
	std::cout << "Phone number: " << this->get_phone() << std::endl;
	std::cout << "Darkest secret: " << this->get_secret() << std::endl << std::endl;
}