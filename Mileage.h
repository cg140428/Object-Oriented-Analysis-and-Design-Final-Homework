#pragma once
#include <iostream>
#include "Paymentmethod.h"
#include "MileageInform.h"
using namespace std;

class Mileage : public Paymentmethod
{
public:
	Mileage();
	~Mileage();
	bool requestPayment(int money);


private:
	MileageInform mInform;
};

