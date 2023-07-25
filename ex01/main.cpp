/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:45:12 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/20 12:03:09 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main()
{
	PhoneBook 		phonebook;
	std::string		cmd;
	std::string 	i;
	int				index;

	index = 0;
	while (cmd != "EXIT")
	{
		std::cout << "ENTER A COMMAND : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			index++;
			phonebook.Add();
		}				
		else if (cmd == "SEARCH")
		{
			if (!index)
			{
				std::cout << "No record is found" << std::endl;
				continue ;
			}
			phonebook.PrintInfos();
			index = -1;
			while (index < 1 || index > 8)
			{
				std::cout << "Enter an index : ";
				std::getline(std::cin, i);
				index = stoi(i);
			}
			phonebook.PrintRecord(index);
		}
	}
	return (0);	
}
