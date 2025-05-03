#pragma once
#include <string>
using namespace std;

class bankaccount
{
private:
	string full_name;
	double balance;
	double interestRate;
	int transactions;
public:
	bankaccount(double bal = 0, double iRate = 0.45, string Full_name = "") : balance(bal), interestRate(iRate), full_name (Full_name), transactions(0) {}
	bool deposit(double amount);
	bool withdraw(double amount);

	void createAccount(const string &Full_name);

	double getBalance() const
	{
		return balance;
	}

	double getInterestRate() const
	{
		return interestRate;
	}

	int getTransactions() const
	{
		return transactions;
	}

};

