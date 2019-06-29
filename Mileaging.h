#pragma once
#include <iostream>
#include "MileageInform.h"
using namespace std;

class Mileaging
{
public:
	Mileaging();
	~Mileaging();

	bool requestMileage(int money);
	

private:
	//MileageInform mInform;
	MileageInform m;
};

