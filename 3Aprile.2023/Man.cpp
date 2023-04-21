#include "Man.h"


Man::Man(char* n, char* s, int a) :_name{ new char[strlen(n) + 1] }, _surname{ new char[strlen(s) + 1] },_age{a}
{
	strcpy_s(_name, strlen(n) + 1, n);
	strcpy_s(_surname, strlen(s) + 1, s);
}
Man::Man() :_name{ nullptr }, _surname{ nullptr },_age{ 0 } {

}
Man::~Man() {
	delete[]_name;
	delete[]_surname;
}

void Man::Put() {
	char temp[1024];
	cout << "Введите имя->"; cin >> temp;
	if (_name) delete[]_name;
	_name = new char[strlen(temp) + 1];
	strcpy_s(_name, strlen(temp) + 1, temp);

	cout << "Введите Фамилию->"; cin >> temp;
	if (_surname) delete[]_surname;
	_surname = new char[strlen(temp) + 1];
	strcpy_s(_surname, strlen(temp) + 1, temp);
	cout << "Ведите возраст"; cin >> _age;
}
void Man::Show() {
	cout << "Имя: " << _name << endl;
	cout << "Фамилия: " << _surname << endl;
	cout << "Возраст: " << _age << endl;
}
void Man::Save() {
	int size;
	fstream f{ "man.txt",ios::out | ios::binary | ios::app };
	if (!f) {
		cout << "Eror no open file\n";
		exit(0);
	}

	f.write((char*)&_age, sizeof(int));
	size = strlen(_name);

	f.write((char*)&size, sizeof(int));
	f.write(_name, size * sizeof(char));

	size = strlen(_surname);
	f.write((char*)&size, sizeof(int));
	f.write(_surname, size * sizeof(char));
	f.close();
}
void Man::Load() {
	fstream f{ "man.txt",ios::in | ios::binary };
	if (!f) {
		cout << "Eror open file\n";
		exit(0);
	}
	char* n, * s;
	int a;
	int temp;
	while (f.read((char*)&a, sizeof(int))) {
		cout << "Имя: ";
		f.read((char*)&temp, sizeof(int));
		n = new char[temp + 1];
		f.read(n, temp * sizeof(char));
		n[temp] = '\0';
		cout << n << endl;

		cout << "Фамилия: ";
		f.read((char*)&temp, sizeof(int));
		s = new char[temp + 1];
		f.read(s, temp * sizeof(char));
		s[temp] = '\0';
		cout << s << endl;

		cout << "Возраст: "<< a << endl;

		delete[]n;
		delete[]s;
	}
		
}
