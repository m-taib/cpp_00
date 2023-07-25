/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:51:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/19 16:02:12 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::Add()
{
	static int		NumberOfContacts;
	int		i;
	std::string Params[8] = {"First Name", "Last Name", "Nick Name", 
							"Phone Number", "Darkest Secret"};
	std::string infos[8];
	i = 0;
	while (i < 5)
	{
		std::cout << "Enter " << Params[i] << ": ";
		std::getline(std::cin, infos[i]);
		if (infos[i][0])
			i++;
	}

	i = NumberOfContacts % 8;

	_contacts[i] = Contact(infos[0], infos[1], infos[2], 
					infos[3], infos[4]);
	NumberOfContacts++;
}

void	PhoneBook::PrintColumn(std::string 	ColumnData)
{
	int		i;
	
	i = -1;
	std::cout << "|";
	while (++i < 10)
	{
		if (i == 9 && ColumnData[i])
			break ;
		if (ColumnData[i])
			std::cout << ColumnData[i];
		else
			std::cout << " ";
	}
	if (ColumnData[i])
		std::cout << ".";
}

void	PhoneBook::PrintInfos()
{
	int		i;

	i = -1;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	while (++i < 8)
	{
		if (!_contacts[i].GetFirstName()[0])
			break ;
		std::cout << "|" << i + 1 << "         ";
		PrintColumn(_contacts[i].GetFirstName()); 
		PrintColumn(_contacts[i].GetLastName());
		PrintColumn(_contacts[i].GetNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::PrintRecord(int	 i)
{
	std::cout << "First name : " << _contacts[i - 1].GetFirstName() << std::endl; 
	std::cout << "Last name : " << _contacts[i - 1].GetLastName() << std::endl; 
	std::cout << "Nick name : " << _contacts[i - 1].GetNickName() << std::endl; 
	std::cout << "Phone number : " << _contacts[i - 1].GetPhoneNumber() << std::endl; 
	std::cout << "Darkest secret : " << _contacts[i - 1].GetDarkestSecret() << std::endl; 
}
