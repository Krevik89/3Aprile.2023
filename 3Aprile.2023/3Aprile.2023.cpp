#include <iostream>
#include <Windows.h>
#include <fstream>
#include "Man.h"
using namespace std;

// Конструкторы

//-----------------------------------------------------------------------
//	fstream();
//	fstream(const char* name, int mode, int filebuf : openprot);
//	fstream(int f); //дискриптор файла
//	fstream(int f,char* buf,int len);
//-----------------------------------------------------------------------

// Моды

//-----------------------------------------------------------------------
//mode :
//	in - режим чтения
//	out - режим записи
//	ate - указатель в конец файла
//	app - добавляет в конец файла данные
//	trunc - усекает файл до нулевой длины
//	_Nocreate -если файл не существует то будет ошибка 
//	_Noreplace -если файл существует то будет ошибка 
//	binary -открыть файл для бинарного обмена
//-----------------------------------------------------------------------

//  Методы

//-----------------------------------------------------------------------
//	open(const char* fileName, int mode, int protection);
//	close();
//	read(char* buf, int len);
//	write(const char* buf,int len);
//	get(); get(char&); - извлекает один символ из потока
//	put(char); -помещает один символ в поток
//	getline(char* buf,int n,char c='\n');
//	ignore(int n=1,int d =EOF);
//	gcount();
//  peek();
//	putback(char c);
//	seekg(long pos);
//	seekp(long pos);
//	tellg();- тек. позиция чтения
//	tellp();- тек. позиция записи
//-----------------------------------------------------------------------

int main(){
	setlocale(LC_ALL, "");
	Man* m;
	for (int i = 0; i < 3; i++) {
		m = new Man;
		m->Put();
		m->Save();
		//delete[]m;
	}
	Man::Load();

	


}

/*//cin  >>  // istream
   //cout <<  // ostream
   //cerr     // ostream
   //clog */

/*char answer;
	   const int meassageCount = 8;
	   int i, j;
	   enum{CHOISE=3,INPUT_FILENAME,INPUT_DIMENSIONS,INPUT_ELEMENTS,FILE_ERROR};
	   char Msg[meassageCount][50] =
	   {
		   "1. Вывести данные из файла\n",
		   "2. Записать данные в Файл\n",
		   "3. Выход из программы\n",
		   "\nВаш выбор -> ",
		   "Введите имя файла ->",
		   "Введите размерность матрицы  ->",
		   "Введите элементы матрицы ->",
		   "Невозможно открыть файл ->"
	   };
	   do
	   {
		   for (i = 0; i < 4; i++) {
			   cout << Msg[i];

		   }
		   cin >> answer;
	   } while (answer < '1' || answer >'3');

	   if (answer == '3')exit(0);

	   char fileName[50];
	   int M, N;
	   int num;

	   cout << "\n" << Msg[INPUT_FILENAME];
	   cin >> fileName;

	   if (answer == '1') {
		   ifstream inF;
		   inF.open(fileName, ios::in | ios::_Nocreate);
		   if (!inF) {
			   cout << Msg[FILE_ERROR];
			   exit(0);
		   }
		   inF >> M;
		   inF >> N;

		   for (i = 0; i < M; i++) {
			   for ( j = 0; j < N; j++){
				   inF >> num;
				   cout << num << " ";
			   }
			   cout << endl;
		   }
		   inF.close();
	   }
	   else {
		   ofstream outF(fileName, ios::out);
		   if (!outF) {
			   cout << Msg[FILE_ERROR];
			   exit(0);
		   }
		   cout << Msg[INPUT_DIMENSIONS];
		   cout << "M = "; cin >> M;
		   cout << "N = "; cin >> N;

		   outF << M << ' ' << N << '\n';

		   cout << Msg[INPUT_ELEMENTS];
		   for ( i = 0; i < M; i++){
			   for (j = 0; j < N; j++) {
				   cout << "arr[" << i << "][" << j << "] = ";
				   cin >> num;
				   outF << num << " ";

			   }
			   outF << "\n";

		   }
		   outF.close();
	   }*/