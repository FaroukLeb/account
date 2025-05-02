#include <iostream>
#include "bankaccount.h"
#include <string>
void operation();
int operation_validation();
void choice(bankaccount &acc, int operation);
int main()
{

	bankaccount account1;
	do {
		operation();
		int operation_choice = operation_validation();
		choice(account1, operation_choice);
		char continue_choice;
		if (operation_choice == 6 )
		{
			break;
		}
	} while (true);
}

 void operation()
{
	cout << "welcome to the bank account program"<<endl;
	cout << "chose an operation" << endl;
	cout << "1. deposit" << endl;
	cout << "2. withdraw" << endl;
	cout << "3. check balance" << endl;
	cout << "4. check interest rate" << endl;
	cout << "5. check transactions" << endl;
	cout << "6. exit" << endl;
	cout << "please enter your choice: " ;
}
 int operation_validation()
 {
	 int choice;
	 cin >> choice;
	 while (choice < 1 || choice > 6)
	 {
		 cout << "invalid choice, please enter a number between 1 and 6: " ;
		 cin >> choice;
	 }
	 return choice;

 }
 void choice(bankaccount &acc, int operatin_validation)
 {
	 switch (operatin_validation)
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
		 cout << "please enter the amount to withdraw: " ;
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