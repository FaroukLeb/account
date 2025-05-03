#include "bankmanager.h"
#include "bankaccount.h"
#include <iostream>
void bankmanager::run()
{
	start();
	operation();
	int operationnumber = operation_number();
	choice(operationnumber);
}

void bankmanager::start()
{
	cout << "do you want to create a new account or use an existing account?" << endl;
	cout << "1. create a new account" << endl;
	cout << "2. use an existing account" << endl;
	cout << "please enter your choice: ";
	int choice;
	cin >> choice;
	cin.ignore();
	if (choice == 1)
		creating_account();
	else
		existing_account();
}
void bankmanager::creating_account()
{
	string name;
	cout << "please enter your name: ";
	getline(cin, name);
	acc.createAccount(name);
	cout << "account created successfully" << endl;
}
void bankmanager::existing_account()
{
	cout << "not finished yet ";
}
void bankmanager::operation()
{
	
		cout << "please choose an operation:" << endl;
		cout << "1. deposit" << endl;
		cout << "2. withdraw" << endl;
		cout << "3. check balance" << endl;
		cout << "4. check interest rate" << endl;
		cout << "5. check number of transactions" << endl;
		cout << "6. exit" << endl;
}
int bankmanager::operation_number()
{
	int choice;
	cin >> choice;
	cin.ignore();
	return choice;
}
void bankmanager::choice(int number)
{
	switch (number)
	{
	case 1:
		double deposit_amount;
		cout << "please enter the amount to deposit: ";
		cin >> deposit_amount;
		if (acc.deposit(deposit_amount))
			cout << "deposit successful" << endl;
		else
			cout << "deposit failed" << endl;
		break;
	case 2:
		double withdraw_amount;
		cout << "please enter the amount to withdraw: ";
		cin >> withdraw_amount;
		if (acc.withdraw(withdraw_amount))
			cout << "withdraw successful" << endl;
		else
			cout << "withdraw failed" << endl;
		break;
	case 3:
		cout << "your balance is: " << acc.getBalance() << endl;
		break;
	case 4:
		cout << "your interest rate is: " << acc.getInterestRate() << endl;
		break;
	case 5:
		cout << "your number of transactions is: " << acc.getTransactions() << endl;
		break;
	case 6:
		cout << "thank you for using the bank account program" << endl;
		break;
	default:
		cout << "invalid choice" << endl;
		break;
	}
}

