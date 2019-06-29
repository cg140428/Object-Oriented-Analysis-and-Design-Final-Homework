#pragma once
#include <iostream>
#include <Windows.h>
#include "Oilmethod.h"
#include "Gasoline.h"
#include "Diesel.h"
using namespace std;

class Oiling
{
public:
	Oiling();
	~Oiling();
	void chooseOil();
	bool requestOiling(int amount);

private:
	Oilmethod* oMethod;
};

