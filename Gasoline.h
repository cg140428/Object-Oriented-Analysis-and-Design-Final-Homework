#pragma once
#include <iostream>
#include "Oilmethod.h"
using namespace std;

class Gasoline : public Oilmethod
{
public:
	Gasoline();
	~Gasoline();

	virtual void anounceOil();
};

