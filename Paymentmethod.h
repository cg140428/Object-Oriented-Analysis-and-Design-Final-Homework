#pragma once
#include <iostream>
using namespace std;

class Paymentmethod
{
public:
	Paymentmethod();
	~Paymentmethod();

	virtual bool requestPayment(int money);
private:

};

