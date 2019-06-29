#pragma once
#include <iostream>

class Sales
{
public:
	Sales();
	~Sales();

	void setTodaySales(int sales);
	void setMonthlySale(int sales, int month);
	void setYearlySales(int sales);

	int getTodaySales();
	int getMonthlySale(int index);
	int getYearlySales();

private:
	int todaySales;
	int monthlySales[12];
	int yearlySales;
};

