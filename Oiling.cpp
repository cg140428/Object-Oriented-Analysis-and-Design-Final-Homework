#include "Oiling.h"



Oiling::Oiling()
{
}


Oiling::~Oiling()
{
}

void Oiling::chooseOil()
{
	int methodNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << "\n *****���� ����******\n\n" << endl;
	cout << " 1��: �ֹ���" << endl;
	cout << " 2��: ����\n" << endl;
	cout << " �Է��ϼ���: ";
	cin >> methodNum;

	switch (methodNum)
	{
	case 1: oMethod = new Gasoline;
		break;
	case 2: oMethod = new Diesel;
		break;
	}
}

bool Oiling::requestOiling(int amount)
{
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	oMethod->anounceOil();
	cout << "\n ������...\n" << endl;
	Sleep(1200);
	cout << " ��û�Ͻ� " << amount / 10000 << "L ������ �Ϸ� �Ǿ����ϴ�." << endl;
	return true;
}
