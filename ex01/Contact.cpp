/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:29:04 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/19 15:00:58 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::Contact(std::string FirstName, std::string LastName, std::string NickName, 
		std::string PhoneNumber, std::string DarkestSecret)	
{
	_firstname = FirstName;	
	_lastname = LastName;	
	_nickname = NickName;	
	_phonenumber = PhoneNumber;
	_darkestsecret = DarkestSecret;
}

Contact::~Contact()
{

}

std::string		Contact::GetFirstName()
{
	return _firstname;
}

std::string		Contact::GetLastName()
{
	return _lastname;
}

std::string		Contact::GetNickName()
{
	return _nickname;
}

std::string		Contact::GetPhoneNumber()
{
	return _phonenumber;
}

std::string 	Contact::GetDarkestSecret()
{
	return _darkestsecret;
}

