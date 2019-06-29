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
	cout << "카드를 삽입해주세요.\n" << endl;
	Sleep(500);
	cout << "결제중...\n" << endl;
	Sleep(1200);
	cout << "요청하신 " << money << "만원의 결제가 완료 되었습니다." << endl;

	return true;
}