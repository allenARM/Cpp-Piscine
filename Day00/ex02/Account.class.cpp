#include "Account.class.hpp"
#include "iostream"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::_check_nums = 0; //bonus

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
}

void	Account::_displayTimestamp(void)
{
	time_t		now = time(NULL);
	struct tm	*local_t = localtime(&now);
	char		time_str[32];

	strftime(time_str, sizeof(time_str), "[%Y%m%d_%H%M%S] ", local_t);
	std::cout << time_str;
}

int		Account::getNbAccounts(void) { return Account::_nbAccounts; }
int		Account::getTotalAmount(void) { return Account::_totalAmount; }
int		Account::getNbDeposits(void) { return Account::_totalNbDeposits; }
int		Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << \
	Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits \
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" \
	<< this->_amount << ";deposit:" << deposit;
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" \
	<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" \
		<< this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" \
	<< this->_amount << ";withdrawal:" << withdrawal;
	this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" \
	<< this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::increase_check(void){ Account::_check_nums++; }

int		Account::checkAmount(void) const
{
	Account::increase_check(); //bonus
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" \
	<< this->_nbWithdrawals << std::endl; 
}