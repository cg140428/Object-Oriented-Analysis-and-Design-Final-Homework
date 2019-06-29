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
	Paymentmethod* pMethod;	//������ �������
	Mileaging* mileaging;	// ���ϸ���
	int amount;	// ������ �ݾ�
};

