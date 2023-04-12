#include <iostream>
#include <string>
#include"Cashier.h"
#include <cstdio>
#include "File.h"

using namespace std;
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

int main()
{
    setlocale(LC_ALL, "");
   // File f("Sklad.txt");
    //f.LoadPrint();
    //Product* p = f.LoadPrint();
    //если хотим посмотреть асортимент
    Product p = { "fil",12,12.0 };
    FILE* file;
    if (!fopen_s(&file, "Sklad.txt", "w")) {
        fprintf(file, "%s", p.name, 25);
        fprintf(file, "%d", p.count );
        fprintf(file, "%f", p.price );
    }
   
    fclose(file);

   /* for (int i = 0; i < 1; i++)
    {
        cout << p.name<< "\t" << p.count <<"\t" << p.price << endl;
    }*/
   //f.Save(&p, 0.00, 6);
}

