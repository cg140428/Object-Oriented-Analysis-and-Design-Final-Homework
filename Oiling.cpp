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
	cout << "\n *****유종 선택******\n\n" << endl;
	cout << " 1번: 휘발유" << endl;
	cout << " 2번: 경유\n" << endl;
	cout << " 입력하세요: ";
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
	cout << "\n 주유중...\n" << endl;
	Sleep(1200);
	cout << " 요청하신 " << amount / 10000 << "L 주유가 완료 되었습니다." << endl;
	return true;
}
