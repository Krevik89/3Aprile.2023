#pragma once
#include<iostream>
using namespace std;

class Employer
{
public:
	virtual void Print() = 0;
};
class President :public Employer {
	virtual void Print() {
		cout << "President";
	}
};
class Manager :public Employer {
	virtual void Print() {
		cout << "Manager";
	}
};
class Worker :public Employer {
	virtual void Print() {
		cout << "Worker";
	}
};

