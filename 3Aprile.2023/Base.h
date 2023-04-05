#pragma once
#include <iostream>

using namespace std;

class Base
{
	char* sp1;
	int size;
public:
	Base(const char* S,int s){
		size = s;
		sp1 = new char[size];
	}
	virtual~Base(){
		cout << "DistructBase";
		delete[]sp1;
	}
};

class Drived :public Base {
	char* sp2;
	int size2;
public:
	 Drived(const char* S1,int s1,const char*S2,int s2) :Base(S1,s1) {
		size2 = s2;
		sp2 = new char[size2];
	}
	 virtual~Drived() {
		cout << "DistructDrived ";
		delete[]sp2;
	}
};

