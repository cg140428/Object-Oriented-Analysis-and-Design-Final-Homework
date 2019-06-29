#pragma once
#include <iostream>
#include <Windows.h>
#include "Paymentmethod.h"
using namespace std;

class Card : public Paymentmethod
{
public:
	Card();
	~Card();
	virtual bool requestPayment(int money);

private:

};

