/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:39:03 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/19 13:37:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::cout << "[19920104_091532] "; //mock, change lter
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	++_nbAccounts;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	_totalAmount -= _amount;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"<< _totalNbDeposits << ";withdrawals:"<< _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = _amount;
	
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
	<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:"
	<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	//[19920104_091532] index:0;p_amount:47;withdrawal:refused
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	int	p_amount = _amount;

	_displayTimestamp();
	if (withdrawal > _totalAmount || withdrawal > _amount) {
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
	<< ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
	<< _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"<< _nbDeposits << ";withdrawals:"<< _nbWithdrawals << std::endl;
}
