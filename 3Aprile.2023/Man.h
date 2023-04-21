#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Man
{
	int _age;
	char* _name;
	char* _surname;

public:
	Man(char* n, char* s, int a);
	Man();
	~Man();

	void Put();
	void Show();
	void Save();
	static void Load();

};

