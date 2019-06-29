#include "Sales.h"



Sales::Sales()
{
	todaySales = 600000;
	monthlySales[0] = 4000000;
	monthlySales[1] = 5000000;
	monthlySales[2] = 3000000;
	monthlySales[3] = 6000000;
	monthlySales[4] = 6000000;
	monthlySales[5] = 4000000;
	monthlySales[6] = 3000000;
	monthlySales[7] = 8000000;
	monthlySales[8] = 4300000;
	monthlySales[9] = 5400000;
	monthlySales[10] = 3400000;
	monthlySales[11] = 7400000;
	yearlySales = 59500000;
}


Sales::~Sales()
{
}

void Sales::setTodaySales(int sales)
{
	todaySales = (sales >= 0) ? sales : 0;
}

void Sales::setMonthlySale(int sales, int month)
{
	monthlySales[month] = (sales >= 0) ? sales : 0;
}

void Sales::setYearlySales(int sales)
{
	yearlySales = (sales >= 0) ? sales : 0;
}

int Sales::getTodaySales()
{
	return todaySales;
}

int Sales::getMonthlySale(int index)
{
	return monthlySales[index];
}

int Sales::getYearlySales()
{
	return yearlySales;
}
