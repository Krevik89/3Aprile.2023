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