#include "MileageInform.h"



MileageInform::MileageInform()
{
	lastIndex = 4;
}

MileageInform::~MileageInform()
{
}


void MileageInform::setPhoneNumList(int index, string phoneNum)
{
	this->phoneNum[index] = phoneNum;
}

void MileageInform::setMileageList(int index, int mileage)
{
	this->mileage[index] = (mileage >= 0) ? mileage : 0;
}

void MileageInform::setLastIndex(int index)
{
	this->lastIndex = (lastIndex >= 0) ? lastIndex : 0;
}

string MileageInform::getPhoneNumList(int index)
{
	return this->phoneNum[index];
}

int MileageInform::getMileageList(int index)
{
	return this->mileage[index];
}

int MileageInform::getlastIndex()
{
	return lastIndex;
}

void MileageInform::loadInform()
{
	FILE *file;
	fopen_s(&file, "mileage.txt", "r");
	int i = 0;

	while (!feof(file))
	{
		char tmpPhoneNum[20];
		int tmpMileage;
		fscanf_s(file, "%s %d", tmpPhoneNum, sizeof(tmpPhoneNum), &tmpMileage);

		phoneNum[i] = tmpPhoneNum;
		mileage[i] = tmpMileage;

		//cout << this->phoneNum[i] << " " << this->mileage[i] << endl;
		i++;
	}
	fclose(file);
}

void MileageInform::setInform()
{
	FILE *file;
	fopen_s(&file, "mileage.txt", "w");
	int i = 0;

	while (mileage[i] > 0)
	{
		string strsum = this->phoneNum[i] + " " +to_string(this->mileage[i]);
		const char* ch = strsum.c_str();
		fputs(ch ,file);
		if(mileage[i + 1] > 0)
			fputs("\n", file);
		i++;
	}
	fclose(file);
}

int MileageInform::searchID(string phoneNum)
{
	int i = 0;
	while (mileage[i] > 0) {
		if (!this->phoneNum[i].compare(phoneNum)) {
			return i;
			break;
		}
		else
			i++;
	}

	return -1;
	return 0;
}
