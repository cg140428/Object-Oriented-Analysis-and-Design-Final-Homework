#include "Card.h"

Card::Card()
{
}

Card::~Card()
{
}

bool Card::requestPayment(int money)
{
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "ī�带 �������ּ���.\n" << endl;
	Sleep(500);
	cout << "������...\n" << endl;
	Sleep(1200);
	cout << "��û�Ͻ� " << money << "������ ������ �Ϸ� �Ǿ����ϴ�." << endl;

	return true;
}