#include "Income.h"

using namespace std;


Income::Income()
{
}

void Income::yearlyIncome() {
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "연매출은 " << sales.getYearlySales() << "원 입니다." << endl;
}

void Income::monthlyIncome() {
	int monthNum;
	cout << "\n 월을 선택하세요:" << endl;
	cin >> monthNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << monthNum << "월 매출은 " << sales.getMonthlySale(monthNum) << "원 입니다." << endl;
}

void Income::todayIncome()
{
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "일매출은 " << sales.getTodaySales() << "원 입니다." << endl;
}

Income::~Income()
{
}
