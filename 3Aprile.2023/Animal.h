#pragma once
#include <iostream>

using namespace std;

//����������� ������� �����
class Animal
{
public:
	char title[20];//������ ���������
	Animal(const char* t) {
		strcpy_s(title,20, t);
	}
	virtual void Speak() = 0;//����� ���� �������
};

class Frog :public Animal {
public:
	Frog(const char* t):Animal(t){}
	virtual void Speak() {
		cout << title << " " << "say: kva-kva\n";
	}
};
class Dog :public Animal {
public:
	Dog(const char* t) :Animal(t) {}
	virtual void Speak() {
		cout << title << " " << "say: gav-gav\n";
	}
};
class Cat :public Animal {
public:
	Cat(const char* t) :Animal(t) {}
	virtual void Speak() {
		cout << title << " " << "say: meow-meow\n";
	}
};