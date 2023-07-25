/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:39:10 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/19 15:55:15 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public :
		PhoneBook();
		~PhoneBook();
		void	Add();
		void	PrintInfos();
		void	PrintColumn(std::string ColumnData);
		void	PrintRecord(int		i);
	private :
		Contact 	_contacts[8];	
};

#endif
