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

// _findfirst(char* path,_finddata_t* fileinfo)
  // attrib
            // _A_NORMAL 
            // _A_RDONLY - чтение
            // _A_HIDDEN - cкрытый
            // _A_SYSTEM - cистемный
            // _A_SUBDIR - директория
            // _A_ARCH - архивный
      // time_access - дата последнего открытия файла
      // time_write - дата последнего редактирования файла
      // size
      // name
      
// _findnext(long done, _finddata_t* fileinfo)
// _findclose(long done) - чистит память от найденых ресурсов
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



//#include<sys/locking.h>
// int _locking(int handle, int mode, long nbytes) - блок или разблокирует 
    // _LK_LOCK , _LK_RCLK    - блочит байты -1 если после 10 попыток не удастся
    // _LK_NBLCK, _LK_NBRLCK   - без попыток сразу регенит ошибку -1
    // _LK_UNLCK - разблокирует

using namespace std;

void russianMessage(const char* str) {
    char message[100];
    CharToOemA(str, message);
    cout << message;
}

	


}

/*//cin  >>  // istream
   //cout <<  // ostream
   //cerr     // ostream
   //clog */

//-----------------------------------------//
#include <direct.h>

// int _mkdir(const char* dirname); создается папка -1 eror
// int _rmdir(const char* dirname); удаляет 
// удаляет и переименовывает только если она пустая 

void RenameDir();// new name
void RemoveDir();// del name
void CreateDir();// new dir

//-----------------------------------------//


void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //setlocale(LC_ALL, "");
    //char source[_MAX_PATH];
    //char destination[_MAX_PATH];
    //char answer[20];
    //russianMessage("\nвеедите путь и название файла\n");
    //cin.getline(source, _MAX_PATH);
    //if (_access(source, 00) == -1) {
    //    russianMessage("\nУказаный файл не существует\n");
    //    return;
    //}
    //russianMessage("\nвеедите путь и название  нового файла\n");
    //cin.getline(destination, _MAX_PATH);
    //if (_access(destination, 00) == 0) {
    //    russianMessage("\nУказаный файл уже существует перезаписать(1-да/2-нет)?\n");
    //    cin.getline(answer, 20);
    //    if (!strcmp(answer, "2")) {
    //        russianMessage("\nОтмена операции\n");
    //        return;
    //    }
    //    else if (strcmp(answer, "1")) {
    //        russianMessage("\nНеправильный ввод\n");
    //        return;
    //    }
    //    if (_access(destination, 02) == -1) {
    //        russianMessage("\nДоступа к записи у файла нету\n");
    //        return;
    //    }     
    //}
    //if (!CopyFiles(source, destination)) {
    //    russianMessage("\nНеудалось скопировать\n");
    //}

    /*cout << "PLease, select number....\n";
    char ch;
    do
    {
        cout << "1 - Rename\n"
            << "2 - Remove\n"
            << "3 - Search file\n"
            << "0 - Exit\n";
        cin >> ch;
        switch (ch) {
        case '1':
            RenameFile();
            break;
        case '2':
            RemoveFile();
            break;
        case '3':
            Dir();
            break;
        }
    } while (ch!='0');*/

		   }
		   cin >> answer;
	   } while (answer < '1' || answer >'3');




}

void RenameFile() {
    char old[50], newName[50];
    cout << "Enter old name ->"; cin >> old;
    cout << "Enter New name->"; cin >> newName;

    if (rename(old, newName) != 0)
        cout << "Erorr rename\n\n";
    else
        cout << "ALL GOOD\n";
}
void RemoveFile() {
    char name[50];
    cout << "Enter name->"; cin >> name;
    if (remove(name) != 0)
        cout << "Erorr\n\n";
    else
        cout << "ALL GOOD\n";
}
void Dir() {
    char path[70];
    cout << "Enter full path(example,C::\\)->"; cin >> path;
    char mask[15];
    cout << "Enter musk(example,*.* or .txt)->"; cin >> mask;

    strcat_s(path, mask);

    _finddata_t* fileinfo = new _finddata_t;
    intptr_t done = _findfirst(path, fileinfo);
    int count = 0;
    intptr_t MayWeWork = done;

    while (MayWeWork != -1)
    {
        count++;
        cout << fileinfo->name << "\n";
        MayWeWork = _findnext(done, fileinfo);
    }

    cout << "Count file(s) =" << count << endl;

    _findclose(done);
    delete fileinfo;

}

		   cout << Msg[INPUT_ELEMENTS];
		   for ( i = 0; i < M; i++){
			   for (j = 0; j < N; j++) {
				   cout << "arr[" << i << "][" << j << "] = ";
				   cin >> num;
				   outF << num << " ";

    if (rename(old, newName) != 0)
        cout << "Erorr rename\n\n";
    else
        cout << "ALL GOOD\n";
}
void RemoveDir() {
    char name[50];
    cout << "Enter name->\n"; cin >> name;

    if (_rmdir(name) == -1)
        cout << "Eror no delete\n";
    else
        cout << "All nice\n";
}
void CreateDir() {
    char name[50];
    cout << "Enter name->\n"; cin >> name;
    if (_mkdir(name) == -1)
        cout << "Eror no create\n";
    else
        cout << "All nice\n";
}


