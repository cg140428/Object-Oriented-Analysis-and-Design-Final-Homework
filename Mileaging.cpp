#include "Mileaging.h"
#include "Mileage.h"


Mileaging::Mileaging()
{
	//m = MileageInform();
}


Mileaging::~Mileaging()
{
}

bool Mileaging::requestMileage(int money)
{
	string phoneNum;
	cout << "\n\n\n------------------------------------------------------------------------------------------\n\n\n";
	cout << " 마일리지 적립을 위해 휴대번호를 입력해주세요: ";
	cin >> phoneNum;

	string phoneNum1[10];
	int mileage1[10];
	//int num;

	FILE *file;
	fopen_s(&file, "mileage.txt", "r");
	int i = 0;

	while (!feof(file))
	{
		char tmpPhoneNum[20];
		int tmpMileage;
		fscanf_s(file, "%s %d", tmpPhoneNum, sizeof(tmpPhoneNum), &tmpMileage);

		phoneNum1[i] = tmpPhoneNum;
		mileage1[i] = tmpMileage;

		if (tmpPhoneNum == phoneNum) {
			mileage1[i] += (money*0.1);
		}

		i++;
	}
	fclose(file);
	FILE *file1;
	fopen_s(&file1, "mileage.txt", "w");
	i = 0;

	while (mileage1[i] > 0)
	{
		string strsum = phoneNum1[i] + " " + to_string(mileage1[i]);
		const char* ch = strsum.c_str();
		fputs(ch, file1);
		if (mileage1[i + 1] > 0)
			fputs("\n", file1);
		i++;
	}
	fclose(file1);

	return true;
}