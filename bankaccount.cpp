#include "bankaccount.h"
#include "bankmanager.h"
bool bankaccount::deposit(double amount)
{
	if (amount <= 0)
		return false;
	balance += amount;
	transactions++;
	return true;
}
bool bankaccount::withdraw(double amount)
{
	if (amount <= 0 || amount > balance)
		return false;
	balance -= amount;
	transactions++;
	return true;
}
void bankaccount::createAccount(const string &Full_name)
{
	full_name = Full_name;
}