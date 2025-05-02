#pragma once
using namespace std;
class bankaccount
{
private:
	double balance;
	double interestRate;
	int transactions;
public:
	bankaccount(double bal = 0, double iRate = 0) : balance(bal), interestRate(iRate), transactions(0) {}
	
	bool deposit(double amount);
	bool withdraw(double amount);


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

