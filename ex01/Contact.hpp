/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:22:23 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/19 16:29:33 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <string>

class Contact
{
	public :
		Contact();
		Contact(std::string FirstName, std::string LastName, std::string NickName, 
				std::string PhoneNumber, std::string DarkestSecret);
		~Contact();
		std::string 	GetFirstName();
		std::string 	GetLastName();
		std::string 	GetNickName();
		std::string 	GetPhoneNumber();
		std::string 	GetDarkestSecret();
	private :
		std::string 	_firstname;
		std::string 	_lastname;
		std::string 	_nickname;
		std::string 	_phonenumber;
		std::string		_darkestsecret;
};

#endif
