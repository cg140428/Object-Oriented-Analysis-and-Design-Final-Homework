#include "UI.h"

using namespace std;

void UI::startProgram() {
	int mode;
	cout << "------------------------------------------------------------------------------------------------\n\n\n\n";
	cout << "\t\t\t 다은 주유소 POS system 입니다.\t\t\t\n\n\n\n" << endl;
	cout << "------------------------------------------------------------------------------------------------\n\n\n";

	cout << "*****프로그램 사용 모드 선택*****\n 1번: 회원\n 2번: 관리자.\n\n 입력하세요 : ";
	cin >> mode;
	checkMode(mode);
	loginWnd(mode);
}

void UI::checkMode(int m)
{
	this->mode = m;
}

void UI::loginWnd(int mode)
{
	if (mode == 1) {
		cout << "------------------------------------------------------------------------------------------------\n\n\n";
		cout << "\n 사용자 계정으로 진행합니다.\n\n";
		userCourse();
	}
	else {
		cout << "------------------------------------------------------------------------------------------------\n\n\n";
		cout << "\n\n*****관리자 계정 정보를 입력해주세요.*****\n";
		while (!requestAdminLogin());
		adminCourse();
	}

}

bool UI::requestAdminLogin()
{
	Login adminlogin;
	std::string id, pw;
	std::cout << "\n관리자 계정 아이디를 입력해주세요. \n ID: ";
	std::cin >> id;
	std::cout << "\n관리자 계정 비밀번호를 입력해주세요. \n PW: ";
	std::cin >> pw;
	if (adminlogin.matchAdmin(id, pw)) {
		return true;
	}
	else {
		return false;
	}
}


void UI::userCourse()
{
	Payment payment;
	Oiling oiling;
	int amount;


	
	
	//결제 시작!
	do {
		//결제수단 선택 (신용카드, 현금 결제, 마일리지 카드)
		payment.choosePaymentMethod();
		//금액 선택 (1만원, 3만원, 5만원, 7만원, 10만원, 가득)
		amount = payment.choosePaymentAmount();
		//유종 선택 (경유, 휘발유)
		oiling.chooseOil();
		if (payment.requestPayment())
			break;
	} while (true);
	
	//payment.requestPayment();


	payment.requestMileage();
	
	//마일리지 적립
	

	//주유시작
	oiling.requestOiling(amount);
	
	
	cout << "\n 안녕히가세요\n\n" << endl;
	system("pause");
}

void UI::adminCourse()
{
	bool condition = 1;
	while (condition)
	{
		Income income;
		int temp;
		cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
		cout << "*****원하시는 기능을 선택해주세요*****" << endl;
		cout << " 1. 연매출확인\n 2. 월매출확인\n 3. 오늘매출확인\n 4. 관리자 모드 종료\n\n 입력하세요 : ";
		std::cin >> temp;

		switch (temp)
		{
		case 1: income.yearlyIncome(); // 연매출
			break;
		case 2: income.monthlyIncome();	// 월매출
			break;
		case 3:	income.todayIncome();	// 일매출
			break;
		case 4: cout << "관리자모드를 종료합니다. \n"; condition = 0;  break;
		}
	}
}