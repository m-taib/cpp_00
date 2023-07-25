/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:48:33 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/25 16:47:42 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount<< ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount<< ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";	
	std::cout << "total:" << _totalAmount<< ";";	
	std::cout << "deposits:" << _totalNbDeposits<< ";";	
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;	
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_displayTimestamp();
	_totalAmount += deposit;
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << _amount<< ";";	
	std::cout << "deposits:" << deposit << ";";	
	std::cout << "amount:" << _amount + deposit << ";";	
	std::cout << "nb_deposits:" << _nbDeposits  << std::endl;	
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";	
	if (withdrawal > _amount)	
	{
		std::cout << "withdrawal:"<< "refused"  << std::endl;
		return (1);	
	}
	std::cout << "withdrawal:" << withdrawal << ";";	
	std::cout << "amount:" << _amount - withdrawal << ";";	
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;	
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (0);

}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout << "accounts" << _nbAccounts<< ";";	
	std::cout << "total:" << _totalAmount<< ";";	
	std::cout << "deposits:" << _totalNbDeposits<< ";";	
	std::cout << "withdrawals:" << _totalNbWithdrawals  << std::endl;	
	return (0);

}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex<< ";";	
	std::cout << "amount:" << _amount << ";";	
	std::cout << "deposits:" << _nbDeposits << ";";	
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;	
}

void		Account::_displayTimestamp( void )
{
	char buffer[20];

	std::time_t now = std::time(NULL);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", std::localtime(&now));
	std::cout << "[" << buffer << "] ";
}
