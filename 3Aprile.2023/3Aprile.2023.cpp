#include <iostream>
#include <Windows.h>

#include <stdio.h>
// fopen_s(FILE*f, const char*filename, const char* mode)
    //r, w, a
    //rb,wb,ab
// fclose(FILE*f); EOF - return в случае ошибки end_of_file
// fgets(char*str, int n, FILE*f)
// fputs(const char* str, FILE*f)
// fread(void*bufer, size_t size, size_t count, FILE* f)
// fwrite(const void* buffer, size_t size, size_t count, FILE* f) - вернет число кол-во записаных байтов
// int _fileno(FILE* f); вернет дискриптор
// int fseek(FILE*f ,int offset [, int whence]) - вернет 0 в случае успеха
    // SEEK_SET(0) начало расположение
    // SEEK_CUR(1) текущее расположение
    // SEEK_END(2) конец расположение
//

// rename(char* oldname, char* newname); - 0 succes
// remove(const char* filename); 0 - succes


#include <io.h>
// int _access(const char* path,int mode) - определяет разрешение файла или директории
    // 00 - на существование
    // 02 - на возможность записи разрешена или если есть 0 если нет -1
    // 04 - разрешено ли чтение
    // 06 - разрешено ли чтение и записи
// long _fileLength(int handle) - метод вернет размер файла в байтах если ошибка то вернет -1

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



//#include<sys/locking.h>
// int _locking(int handle, int mode, long nbytes) - блок или разблокирует 
    // _LK_LOCK , _LK_RCLK    - блокирует байты return -1 если после 10 попыток не удастся заблочить
    // _LK_NBLCK, _LK_NBRLCK   - без попыток сразу регенит ошибку -1
    // _LK_UNLCK - разблокирует

using namespace std;

void russianMessage(const char* str) {
    char message[100];
    CharToOemA(str, message);
    cout << message;
}

bool CopyFiles(char* source, char* desti) {
    const int size = 65536;
    FILE* src, * dest;

    if (fopen_s(&src, source, "rb")) return false;
    size_t handle = _fileno(src);

    char* data = new char[size];

    if (fopen_s(&dest, desti, "wb")) return false;
    size_t realsize;
    while (!feof(src))
    {
        realsize = fread(data, sizeof(char), size, src);
        fwrite(data, sizeof(char), realsize, dest);
    }
    fclose(src);
    fclose(dest);
    return true;
}

//-----------------------------------------//
void RenameFile();//переименовать
void RemoveFile();//делит
void Dir();//поиск

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

    /*cout << "PLease, select number....\n";
    char ch;
    do
    {
        cout << "1 - Rename\n"
            << "2 - Remove\n"
            << "3 - Create file\n"
            << "0 - Exit\n";
        cin >> ch;
        switch (ch) {
        case '1':
            RenameDir();
            break;
        case '2':
            RemoveDir();
            break;
        case '3':
            CreateDir();
            break;
        }
    } while (ch != '0');*/

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
        cout << "Eror\n";
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

void RenameDir() {
    char old[50], newName[50];
    cout << "Enter old name ->"; cin >> old;
    cout << "Enter New name->"; cin >> newName;

    if (rename(old, newName) != 0)
        cout << "Eror rename\n\n";
    else
        cout << "ALL GOOD\n";
}
void RemoveDir() {
    char name[50];
    cout << "Enter name->\n"; cin >> name;

    if (_rmdir(name) == -1)
        cout << "Eror no remove\n";
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


