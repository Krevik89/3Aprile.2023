#pragma once

/*
class A{
public:
    virtual void func() = 0; //����� ����������� ������� ���� � ����� ���� 1 ����� ������� �� ���������� ����������� � ������ ������ �������
    virtual void func2() = 0;
};
class B : public A{
     void func() {
        cout << "class B";
     }
     virtual void func2() {};
};
class C : public A{
    void func2() {
        cout << "class C";
    }
    virtual void func() {};
}; 
class D : public B {
    void func() {
        cout << "class D";
    }
};
*/

//class A {
//public:
//    virtual~A() = 0;
//    int val;
//};
//
//class B:public virtual A{};
//class C:public virtual A{};
//class D:public C,public B{
//public:
//    int Getval() {
//        return val;// B::val ���� ������������ �� ������������ ������
//    }
//};

//������� ����������� ������� ����� Employer(��������) �
//����� ����������� �������� Print().�������� ��� �����������
//������ : President, Manager, Worker.�������������� �������
//Print() ��� ������ ����������, ��������������� ������� ����
//���������.

/*������� ����������� ������� ����� � ����������� �������� � �������.
������� ����������� ������: �������������, ����,
������������� �����������, �������� �� ������ ���������
�������. ��� �������� ���������� ������ ������ �� ����������� �����,
������� ������������� ������ ��������� ��������.
*/

//void Test(int t) {
//    if (t == 2)throw"Eroro-t = 2";
//    else if (t == 3) throw"Eroro t=3";
//}
//void Test() {
//    try {
//        throw"Hello\n";
//    }
//    catch (const char* t) {
//        cout << "Exception! ";
//        throw;//�������� ���������� ���� catch
//    }
//}


//main
/*A a;
    B b;
    C c;
    D d;
   
    A* pA;
    pA = &b;
    pA->func();
    cout << endl;

    pA = &c;
    pA->func();
    cout << endl;

    pA = &d;
    pA->func();
    cout << endl;
  
    //������
   // B* pB;
   // pB = &a;

   Animal* animals[3] = {
        new Frog{"Turti"},
        new Dog{"Bob"},
        new Cat{"Bars"}
    };

    for (int i = 0; i < 3; i++)
    {
        animals[i]->Speak();
    }

   //Drived mystr("string 1", 9, "string 2", 9);
   //Base* base = new Drived{ "string 1", 9, "string 2", 9 };
   //delete base;
   */
/*Employer* employer[3] = {
        new President,
        new Manager,
        new Worker
    };
    for (int i = 0; i < 3; i++)
    {
        employer[i]->Print(); cout << endl;
    }*/

/* Figura* figurs = {
        new Pryamouglnik(2,4),
    };//���������*/

 // int arr = 2;
   // cout << arr / 0;
    //try {
    //    //���� ����
    //    throw//���������_������������ ����
    //}
    //catch (/*���_���������� ���*/) {
    //    //���� ����
    //}
 /* int a, b;
    try {
        cin >> a >> b;
        if (b == 0) throw b;
        cout << a / b;
    }
    catch (int b) {
        cout << "Eroro";
    }*/
 // try {
   //     int* ptr = nullptr;
   //     int size;
   //     cin >> size;
   //     if (size < 1 || size > 100)throw"\nEroro size";
   //     ptr = new int[size];
   //     if (!ptr)throw"\nEroro new memory";
   //     int a;
   //     cin >> a;
   //     if (a == 0) throw a;
   // }
   //* catch (int s) { cout << "Eroro - a =" << s << endl; }
   // catch(const char* s) { cout << s; }*/
   // catch (...) { cout << "eror"; }

 /* try{
        Test(2);
        Test(4);
    }
    catch (const char* t) { cout << t; }*/
 //cout << "Start\n";
    //int* a=nullptr;
    //try {
    //    if (!a)throw"";
    //    *a += 5;
    //    //Test();
    //    cout << *a;
    //}
    //catch (...) {
    //    cout << "Eroro";
    //}

//������������ ����
//using std::cout;
//namespace name1 {
//    void Print() {
//        cout << "Hello\n";
//    }
//}
//namespace {
//    int a=1;
//}
//namespace name2 {
//    void Print() {
//        cout << "world\n";
//    }
//}
//namespace name1 {
//    void Print1() {
//        cout << "Hello world\n";
//    }
//}
//int a = 8;
//void f1() {  
//    int znak;
//    string str;
//  
//    try {
//         cin >> str;//56+46
//
//        if ((znak = str.find_first_of("+-/*",1)) == string::npos)
//            throw "No znak\n";
//        int a = stoi(str.substr(0, znak));
//        int b = stoi(str.substr(znak+1));
//
//        switch (str[znak]){
//        
//           case '+':
//               if (a > INT_MAX - b)throw"+";
//               cout << a + b << endl;
//               
//                break;
//           case '-':
//               if (a > INT_MIN + b)throw"-";
//               cout << a - b << endl;
//                break;
//           case '*':
//               if (a < 0 || b < 0) {
//                   if (a < INT_MIN / b)throw"*";
//               }
//               else {
//                   if (a > INT_MAX / b)throw"*";
//               }
//               cout << a * b << endl;
//                break;
//           case'/':
//               if (b != 0)
//                   cout << a / b << endl;
//               else throw"/";
//                break;
//        default:
//            break;
//        }
//    }
//     catch (const char* s) {
//         cout << "Eror " << s;
//     }
//     catch (const  out_of_range& e) {
//         cout << "Eror " << e.what();
//     }
//    
//}



#include <stdio.h>
// fopen_s(FILE*f, const char*filename, const char* mode)
    //r, w, a
    //rb,wb,ab
// fclose(FILE*f); EOF - return � ������ ������ end_of_file
// fgets(char*str, int n, FILE*f)
// fputs(const char* str, FILE*f)
// fread(void*bufer, size_t size, size_t count, FILE* f)
// fwrite(const void* buffer, size_t size, size_t count, FILE* f) - ������ ����� ���-�� ��������� ������
// int _fileno(FILE* f); ������ ����������
// int fseek(FILE*f ,int offset [, int whence]) - ������ 0 � ������ ������
    // SEEK_SET(0) ������ ������������
    // SEEK_CUR(1) ������� ������������
    // SEEK_END(2) ����� ������������
//

// rename(char* oldname, char* newname); - 0 succes
// remove(const char* filename); 0 - succes

#include <io.h>
// int _access(const char* path,int mode) - ���������� ���������� ����� ��� ����������
    // 00 - �� �������������
    // 02 - �� ����������� ������ ��������� ��� ���� ���� 0 ���� ��� -1
    // 04 - ��������� �� ������
    // 06 - ��������� �� ������ � ������
// long _fileLength(int handle) - ����� ������ ������ ����� � ������ ���� ������ �� ������ -1

// _findfirst(char* path,_finddata_t* fileinfo)
  // attrib
            // _A_NORMAL 
            // _A_RDONLY - ������
            // _A_HIDDEN - c������
            // _A_SYSTEM - c��������
            // _A_SUBDIR - ����������
            // _A_ARCH - ��������
      // time_access - ���� ���������� �������� �����
      // time_write - ���� ���������� �������������� �����
      // size
      // name

// _findnext(long done,_findata_t*fileinfo)
// _findclose(long done) - ������ ������ �� �������� ��������

//#include<sys/locking.h>
// int _locking(int handle, int mode, long nbytes) - ���� ��� ������������ 
    // _LK_LOCK , _LK_RCLK    - ������ ����� -1 ���� ����� 10 ������� �� �������
    // _LK_NBLCK, _LK_NBRLCK   - ��� ������� ����� ������� ������ -1
    // _LK_UNLCK - ������������

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
void RenameFile();//�������������
void RemoveFile();//�����
void Dir();//�����

//-----------------------------------------//
#include <direct.h>

// int _mkdir(const char* dirname); ��������� ����� -1 eror
// int _rmdir(const char* dirname); ������� 
// ������� � ��������������� ������ ���� ��� ������ 

void RenameDir();// new name
void RemoveDir();// del name
void CreateDir();// new dir

//-----------------------------------------//

//main dir

 //setlocale(LC_ALL, "");
    //char source[_MAX_PATH];
    //char destination[_MAX_PATH];
    //char answer[20];
    //russianMessage("\n������� ���� � �������� �����\n");
    //cin.getline(source, _MAX_PATH);
    //if (_access(source, 00) == -1) {
    //    russianMessage("\n�������� ���� �� ����������\n");
    //    return;
    //}
    //russianMessage("\n������� ���� � ��������  ������ �����\n");
    //cin.getline(destination, _MAX_PATH);
    //if (_access(destination, 00) == 0) {
    //    russianMessage("\n�������� ���� ��� ���������� ������������(1-��/2-���)?\n");
    //    cin.getline(answer, 20);
    //    if (!strcmp(answer, "2")) {
    //        russianMessage("\n������ ��������\n");
    //        return;
    //    }
    //    else if (strcmp(answer, "1")) {
    //        russianMessage("\n������������ ����\n");
    //        return;
    //    }
    //    if (_access(destination, 02) == -1) {
    //        russianMessage("\n������� � ������ � ����� ����\n");
    //        return;
    //    }     
    //}
    //if (!CopyFiles(source, destination)) {
    //    russianMessage("\n��������� �����������\n");
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


//dir 
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

void RenameDir() {
    char old[50], newName[50];
    cout << "Enter old name ->"; cin >> old;
    cout << "Enter New name->"; cin >> newName;

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