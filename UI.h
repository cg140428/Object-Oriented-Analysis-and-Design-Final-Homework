#pragma once
#include <string>
#include <iostream>
#include "Login.h"
#include "Payment.h"
#include "Paymentmethod.h"
#include "Income.h"
#include "Oiling.h"
using namespace std;

class UI
{
private:
	string ID;
	string PW;
	int mode;

public:
	UI() {  };
	void startProgram();
	void checkMode(int mode);
	void loginWnd(int mode);
	bool requestAdminLogin();
	void userCourse();
	void adminCourse();
};