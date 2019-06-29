#pragma once
#include <iostream>
#include "Paymentmethod.h"
#include "Card.h"
#include "Cash.h"
#include "Mileage.h"
#include "Mileaging.h"
using namespace std;

class Payment
{
public:
	Payment();
	~Payment();

	void choosePaymentMethod();
	int choosePaymentAmount();
	bool requestPayment();
	bool requestMileage();

private:
	Paymentmethod* pMethod;	//선택한 결제방식
	Mileaging* mileaging;	// 마일리지
	int amount;	// 선택한 금액
};

