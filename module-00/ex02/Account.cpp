/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:02:31 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 00:48:08 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	// init instance local members
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	// init static members
	_nbAccounts++;
	_totalAmount += initial_deposit;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void Account::makeDeposit( int deposit )
{
	//[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" 
			  << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << '\n';
	// local
	_amount += deposit;
	_nbDeposits++;
	// global
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" 
			  << withdrawal;
	if (withdrawal > checkAmount())
	{
		std::cout << ";refused\n";
		return (false);
	}
	std::cout << withdrawal << ";amount:" << _amount + withdrawal << ";nb_withdrawals:" << _nbWithdrawals << '\n';
	// local
	_amount -= withdrawal;
	_nbWithdrawals++;
	// global
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount" << _amount << ";deposit"
			  << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" 
			  << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << '\n';
}

int		Account::checkAmount() const
{
	return _amount;
}

void Account::_displayTimestamp()
{
	std::time_t	rawTime = std::time(NULL);
	char strTimeBuff[19];
	std::tm *time = std::localtime(&rawTime);
	strftime(strTimeBuff, sizeof(strTimeBuff), "[%Y%m%d_%H%M%S] ", time);
	std::cout << strTimeBuff;
}

// static members accessors

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);	
}
