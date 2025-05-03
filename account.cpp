#include <iostream>
#include "bankaccount.h"
#include "bankmanager.h"
#include <string>
#include <vector>
#include <iomanip>

int main()
{
	bankmanager manager;
	while (true)
	{
		manager.run();
		std::cout << "Do you want to perform another operation? (y/n): ";
		char choice;
		std::cin >> choice;
		if (choice != 'y' && choice != 'Y')
			break;
	}
	return 0;
}
