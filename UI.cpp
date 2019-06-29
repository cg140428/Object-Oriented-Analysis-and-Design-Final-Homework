#include "UI.h"

using namespace std;

void UI::startProgram() {
	int mode;
	cout << "------------------------------------------------------------------------------------------------\n\n\n\n";
	cout << "\t\t\t ���� ������ POS system �Դϴ�.\t\t\t\n\n\n\n" << endl;
	cout << "------------------------------------------------------------------------------------------------\n\n\n";

	cout << "*****���α׷� ��� ��� ����*****\n 1��: ȸ��\n 2��: ������.\n\n �Է��ϼ��� : ";
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
		cout << "\n ����� �������� �����մϴ�.\n\n";
		userCourse();
	}
	else {
		cout << "------------------------------------------------------------------------------------------------\n\n\n";
		cout << "\n\n*****������ ���� ������ �Է����ּ���.*****\n";
		while (!requestAdminLogin());
		adminCourse();
	}

}

bool UI::requestAdminLogin()
{
	Login adminlogin;
	std::string id, pw;
	std::cout << "\n������ ���� ���̵� �Է����ּ���. \n ID: ";
	std::cin >> id;
	std::cout << "\n������ ���� ��й�ȣ�� �Է����ּ���. \n PW: ";
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


	
	
	//���� ����!
	do {
		//�������� ���� (�ſ�ī��, ���� ����, ���ϸ��� ī��)
		payment.choosePaymentMethod();
		//�ݾ� ���� (1����, 3����, 5����, 7����, 10����, ����)
		amount = payment.choosePaymentAmount();
		//���� ���� (����, �ֹ���)
		oiling.chooseOil();
		if (payment.requestPayment())
			break;
	} while (true);
	
	//payment.requestPayment();


	payment.requestMileage();
	
	//���ϸ��� ����
	

	//��������
	oiling.requestOiling(amount);
	
	
	cout << "\n �ȳ���������\n\n" << endl;
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
		cout << "*****���Ͻô� ����� �������ּ���*****" << endl;
		cout << " 1. ������Ȯ��\n 2. ������Ȯ��\n 3. ���ø���Ȯ��\n 4. ������ ��� ����\n\n �Է��ϼ��� : ";
		std::cin >> temp;

		switch (temp)
		{
		case 1: income.yearlyIncome(); // ������
			break;
		case 2: income.monthlyIncome();	// ������
			break;
		case 3:	income.todayIncome();	// �ϸ���
			break;
		case 4: cout << "�����ڸ�带 �����մϴ�. \n"; condition = 0;  break;
		}
	}
}