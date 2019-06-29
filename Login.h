#pragma once
#include <iostream>
#include <string>
using namespace std;

class Login
{
public:
	Login();
	~Login();

	bool matchAdmin(string id, string pw);

private:
	string inputID;
	string inputPW;
};