#include "Cash.h"

Cash::Cash()
{
}


Cash::~Cash()
{
}

bool Cash::requestPayment(int money)
{
	int payMoney = 0;
	int payTotal = 0;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << " �����ݾ��� " << money << "�� �Դϴ�.\n\n ���� ���� ���Ա⿡ �־��ּ��� : ";
	cin >> payMoney;
	payTotal += payMoney;
	while (1)
	{
		if (payTotal < money) {
			cout << "\n " <<  money - payTotal << "���� �� �־��ּ���.: ";
			cin >> payMoney;
			payTotal += payMoney;
		}
		else if (payTotal == money) {
			cout << "\n " << money << "�� ������ �Ϸ�Ǿ����ϴ�. \n";
			return true;
		}
		else if (payTotal > money) {
			cout << "\n " << money << "�� ������ �Ϸ�Ǿ����ϴ�." << endl;
			cout << "\n �Ž����� " << payTotal - money << "���� �޾ư�����." << endl;
			return true;
		}
	}
}
