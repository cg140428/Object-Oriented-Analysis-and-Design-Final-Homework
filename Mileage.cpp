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
	cout << " 마일리지 조회를 위해 휴대번호를 입력해주세요: ";
	cin >> phoneNum;

	mInform.loadInform();
	
	int ID = mInform.searchID(phoneNum);
	if (ID == -1) {
		cout << "\n 해당 휴대번호의 마일리지 내역이 없습니다." << endl;
		return false;
	}
	else {
		//마일리지로 계산가능
		if (mInform.getMileageList(ID) >= money) {
			int mPoint = mInform.getMileageList(ID);
			mPoint -= money;
			mInform.setMileageList(ID, mPoint);
			mInform.setInform();
			cout << "\n 요청하신 " << money << "원의 결제가 완료 되었습니다." << endl;
			cout << "\n 잔여 마일리지는 " << mInform.getMileageList(ID) << "원 입니다." << endl;

			return true;
		}
		else {
			cout << "\n 결제 가능한 마일리지가 부족합니다." << endl;
			cout << "\n 다른 결제 방식으로 결제하세요." << endl;

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