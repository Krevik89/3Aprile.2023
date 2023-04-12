#pragma once
#include <iostream>
using namespace std;

class Cashier
{
	double _cash_money;
	string _name;
public:
	Cashier(double cash, string name) :_cash_money{ cash }, _name{name} {}

	void PrintName() {
		cout << "Кассир: " << _name << " Выручка: " << _cash_money<<endl;
	}


};

