/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:15:59 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/18 18:46:40 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	to_upper(char **av)
{
	while (*av)
	{
		while (**av)
		{
			std::cout << (char)toupper(**av);
			(*av)++;
		}
		av++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}	
	to_upper(++av);
	return (0);
}
