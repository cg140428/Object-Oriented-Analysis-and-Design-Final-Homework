#pragma once
#include <iostream>
#include "Paymentmethod.h"
using namespace std;

class Cash : public Paymentmethod
{
public:
	Cash();
	~Cash();
	virtual bool requestPayment(int money);

private:

};

