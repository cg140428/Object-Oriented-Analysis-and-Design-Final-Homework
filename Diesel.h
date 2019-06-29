#pragma once
#include <iostream>
#include "Oilmethod.h"
using namespace std;

class Diesel : public Oilmethod
{
public:
	Diesel();
	~Diesel();
	virtual void anounceOil();

};

