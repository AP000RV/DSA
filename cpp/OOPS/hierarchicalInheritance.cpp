#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout << "inside function 1" << endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout << "inside function 2" << endl;
    }
};

class C: public B{
    public:
    void func3(){
        cout << "inside function 3" << endl;
    }
};

int main(){
    A obj1;
    cout << "calling from A" << endl;
    obj1.func1();

    B obj2;
    cout << "calling from B" << endl;
    obj2.func1();
    obj2.func2();

    C obj3;
    cout << "calling from C" << endl;
    obj3.func1();
    obj3.func2();        // this cant be access... if class C inherits from class A instead of B
    obj3.func3();


    return 0;
}