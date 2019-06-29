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
	cout << "\n *****������� ����******\n\n" << endl;
	cout << " 1��: ī�� ����" << endl;
	cout << " 2��: ���� ����" << endl;
	cout << " 3��: ���ϸ��� ����" << endl;
	cout << "\n �Է��ϼ���: ";
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
	cout << "\n *****�ݾ� ����******\n\n" << endl;
	cout << " 1��: 3����" << endl;
	cout << " 2��: 5����" << endl;
	cout << " 3��: 7����" << endl;
	cout << " 4��: 10����\n" << endl;
	cout << "�Է��ϼ���: ";
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
