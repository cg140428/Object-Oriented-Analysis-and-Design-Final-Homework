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
	cout << " 결제금액은 " << money << "원 입니다.\n\n 돈을 지폐 투입기에 넣어주세요 : ";
	cin >> payMoney;
	payTotal += payMoney;
	while (1)
	{
		if (payTotal < money) {
			cout << "\n " <<  money - payTotal << "원을 더 넣어주세요.: ";
			cin >> payMoney;
			payTotal += payMoney;
		}
		else if (payTotal == money) {
			cout << "\n " << money << "원 결제가 완료되었습니다. \n";
			return true;
		}
		else if (payTotal > money) {
			cout << "\n " << money << "원 결제가 완료되었습니다." << endl;
			cout << "\n 거스름돈 " << payTotal - money << "원을 받아가세요." << endl;
			return true;
		}
	}
}
