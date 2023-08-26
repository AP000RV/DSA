#include<iostream>
using namespace std;

class B{

public:
int a, b;

public:
int add(){
    return a+b;
}

// operator overload
void operator+ (B &obj){
    cout << "Hello Apj!" << endl;
}

void operator() (){
    cout << "I am a bracket" << endl;
}

};

int main(){

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+ obj2;

    obj1();

    return 0;
}