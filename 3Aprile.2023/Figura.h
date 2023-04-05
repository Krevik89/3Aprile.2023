#pragma once
#include<iostream>
using namespace std;
class Figura
{
protected:
	int heigt;
	int width;
	int base;
public:
	Figura(int w, int h, int b) :heigt{ h }, width{ w }, base{b} {}
	Figura(int w,int h):heigt{h},width{w}{}
	Figura(int h):heigt{h}{}
	virtual void Area() = 0;
};
class Pryamouglnik :public virtual Figura {
	Pryamouglnik(int h,int w):Figura(h,w){}
	virtual void Area() {
		cout << "������� �������������� = "<< heigt * width;
	}
};
class Krug :public virtual Figura {

	Krug(int h):Figura(h){}
	virtual void Area() {
		cout << "������� ����� = pi*R*R)"<<heigt*heigt * 3,14;
	}
};
class PryamouglnTreugolnik :public virtual Figura {
	PryamouglnTreugolnik(int h,int w) :Figura(h,w) {}
	virtual void Area() {
		cout << "������� �������������� ������������ = "<< 0.5* heigt * width;
	}
};
class Trapecia :public virtual Figura {
	Trapecia(int h,int w,int b):Figura(h,w,b){}
	Trapecia(int h,int w):Figura(h,w){}
	virtual void Area() {
		cout << "������� �������� ����� ��������� � ������ = "<< 0.5 * base*(heigt + width);
		cout << "������� �������� ����� ������� ����� � ������ ="<< width * heigt;
		
	}
};


////���������