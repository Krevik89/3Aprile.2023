#include <iostream>
#include<string>

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


void f1() {  
    int znak;
    string str;
    long long i = 0;
    long long i1 = 0;
    try {
         cin >> str;//56+46

        if ((znak = str.find_first_of("+-/*",1)) == string::npos)
            throw "No znak\n";


        if (str[znak] == '+') {
            i = stoll(str.substr(0, znak));
            i1 = stoll(str.substr(znak));
             if (i < INT_MIN || i > INT_MAX)
                 throw "Leave diaposon";
            cout << i << endl;
        }
        if (str[znak] == '-') {
             i = stoll(str.substr(0, znak)) - stoll(str.substr(znak));
             if (i < INT_MIN || i > INT_MAX)
                 throw "Leave diaposon";
            cout << i << endl;
        }
        if (str[znak] == '*') {
             i = stoll(str.substr(0, znak)) * stoll(str.substr(znak));
             if (i < INT_MIN || i > INT_MAX)
                 throw "Leave diaposon";
            cout << i << endl;
        }
        if (str[znak] == '/') {
             i = stoll(str.substr(0, znak)) / stoll(str.substr(znak));
             if (i < INT_MIN || i > INT_MAX)
                 throw "Leave diaposon";
            cout << i << endl;
        }
       
         cout << stoi(str.substr(0, znak)) + stoi(str.substr(znak));
    }
     catch (const char* s) {
         cout << "Eror " << s;
     }
     catch (const  out_of_range& e) {
         cout << "Eror " << e.what();
     }
    
}


int main()
{
   /* name1::Print();
    name2::Print();
    name1::Print1();
    int a = 6;
    std::cout << "\n"<<::a;*/
    f1();
    //2147483647
}

