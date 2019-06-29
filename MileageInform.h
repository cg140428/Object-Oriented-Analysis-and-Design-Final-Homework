#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MileageInform
{
public:
	MileageInform();
	~MileageInform();

	void setPhoneNumList(int index, string phoneNum);
	void setMileageList(int index, int mileage);
	void setLastIndex(int index);

	string getPhoneNumList(int index);
	int getMileageList(int index);
	int getlastIndex();

	void loadInform();
	void setInform();
	int searchID(string phoneNum);


private:

	//vector<string> phoneNum;
	string phoneNum[10];
	int mileage[10];
	int lastIndex;
};

