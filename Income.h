#pragma once
#include <iostream>
#include "Sales.h"

class Income
{
public:
	Income();
	~Income();
	void yearlyIncome();
	void monthlyIncome();
	void todayIncome();

private:
	Sales sales;
};

