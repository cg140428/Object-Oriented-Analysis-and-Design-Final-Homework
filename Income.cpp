#include "Income.h"

using namespace std;


Income::Income()
{
}

void Income::yearlyIncome() {
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "�������� " << sales.getYearlySales() << "�� �Դϴ�." << endl;
}

void Income::monthlyIncome() {
	int monthNum;
	cout << "\n ���� �����ϼ���:" << endl;
	cin >> monthNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << monthNum << "�� ������ " << sales.getMonthlySale(monthNum) << "�� �Դϴ�." << endl;
}

void Income::todayIncome()
{
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "�ϸ����� " << sales.getTodaySales() << "�� �Դϴ�." << endl;
}

Income::~Income()
{
}
