#pragma once
#include "bankaccount.h"
class bankmanager
{
private:
	bankaccount acc;
public:
	void run();
	void start();
	void creating_account();
	void existing_account();
	void operation();
	int operation_number();
	void choice(int number);
};

