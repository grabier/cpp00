/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:19:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/24 15:33:27 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

//#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>
#include <string.h>

class	Contact{
	private:
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string phone;
		std::string secret;
	public:
		//Constructors
		Contact();
		~Contact();
		
		//Setters
		void set_fname(std::string _fname);
		void set_lname(std::string _lname);
		void set_nickname(std::string _nickname);
		void set_phone(std::string _phone);
		void set_secret(std::string _secret);

		//Getters
		std::string get_fname();
		std::string get_lname();
		std::string get_nickname();
		std::string get_phone();
		std::string get_secret();

		void printcontact();
};

#endif