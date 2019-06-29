#include "Mileage.h"



Mileage::Mileage()
{
}


Mileage::~Mileage()
{
}

bool Mileage::requestPayment(int money)
{
	string phoneNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << " ���ϸ��� ��ȸ�� ���� �޴��ȣ�� �Է����ּ���: ";
	cin >> phoneNum;

	mInform.loadInform();
	
	int ID = mInform.searchID(phoneNum);
	if (ID == -1) {
		cout << "\n �ش� �޴��ȣ�� ���ϸ��� ������ �����ϴ�." << endl;
		return false;
	}
	else {
		//���ϸ����� ��갡��
		if (mInform.getMileageList(ID) >= money) {
			int mPoint = mInform.getMileageList(ID);
			mPoint -= money;
			mInform.setMileageList(ID, mPoint);
			mInform.setInform();
			cout << "\n ��û�Ͻ� " << money << "���� ������ �Ϸ� �Ǿ����ϴ�." << endl;
			cout << "\n �ܿ� ���ϸ����� " << mInform.getMileageList(ID) << "�� �Դϴ�." << endl;

			return true;
		}
		else {
			cout << "\n ���� ������ ���ϸ����� �����մϴ�." << endl;
			cout << "\n �ٸ� ���� ������� �����ϼ���." << endl;

			return false;
		}
	}
}

/*
int Mileage::searchID(string phoneNum)
{
	int i = 0;
	while (mInform.getMileageList(i) > 0) {
		if (mInform.getPhoneNumList(i) == phoneNum) {
			return i;
			break;
		}
		else
			i++;
	}

	return -1;
}
*/