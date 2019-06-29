#include "Payment.h"



Payment::Payment()
{
}


Payment::~Payment()
{
}

void Payment::choosePaymentMethod()
{
	int methodNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "\n *****결제방식 선택******\n\n" << endl;
	cout << " 1번: 카드 결제" << endl;
	cout << " 2번: 현금 결제" << endl;
	cout << " 3번: 마일리지 결제" << endl;
	cout << "\n 입력하세요: ";
	cin >> methodNum;

	switch (methodNum)
	{
	case 1: pMethod = new Card; 
		break;
	case 2: pMethod = new Cash; 
		break;
	case 3: pMethod = new Mileage;
	}
}

int Payment::choosePaymentAmount()
{
	int amountNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "\n *****금액 선택******\n\n" << endl;
	cout << " 1번: 3만원" << endl;
	cout << " 2번: 5만원" << endl;
	cout << " 3번: 7만원" << endl;
	cout << " 4번: 10만원\n" << endl;
	cout << "입력하세요: ";
	cin >> amountNum;

	switch (amountNum)
	{
	case 1: amount = 30000;
		break;
	case 2: amount = 50000;
		break;
	case 3: amount = 70000;
		break;
	case 4: amount = 100000;
		break;
	}

	return amount;
}

bool Payment::requestPayment()
{
	if (pMethod->requestPayment(amount))
		return true;
	else
		return false;
}

bool Payment::requestMileage()
{
	while (!mileaging->requestMileage(amount));
	return true;
}
