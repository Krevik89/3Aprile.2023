﻿#include <iostream>
#include"Animal.h"
#include"Base.h"
#include"Employer.h"
#include"Figura.h"

using namespace std;
/*
class A{
public:
    virtual void func() = 0; //чисто виртуальная функция если в класе есть 1 такая функция он становится абстрактным и обьект нельзя создать
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
//        return val;// B::val либо наследование от виртуального класса
//    }
//};


//Создать абстрактный базовый класс Employer(служащий) с
//чисто виртуальной функцией Print().Создайте три производных
//класса : President, Manager, Worker.Переопределите функцию
//Print() для вывода информации, соответствующей каждому типу
//служащего.

/*Создать абстрактный базовый класс с виртуальной функцией – площадь.
Создать производные классы: прямоугольник, круг,
прямоугольный треугольник, трапеция со своими функциями
площади. Для проверки определить массив ссылок на абстрактный класс,
которым присваиваются адреса различных объектов.
*/

void Test(int t) {
    if (t == 2)throw"Eroro-t = 2";
    else if (t == 3) throw"Eroro t=3";
}
void Test() {
    try {
        throw"Hello\n";
    }
    catch (const char* t) {
        cout << "Exception! ";
        throw;//передача исключения след catch
    }
}

int main()
{
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
  
    //нельзя
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
    };//недописал*/

   // int arr = 2;
   // cout << arr / 0;
    //try {
    //    //блок кода
    //    throw//выражение_определеного типа
    //}
    //catch (/*тип_исключения имя*/) {
    //    //блок кода
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
    cout << "Start\n";
    int* a=nullptr;
    try {
        if (!a)throw"";
        *a += 5;
        //Test();
        cout << *a;
    }
    catch (...) {
        cout << "Eroro";
    }
    

}
