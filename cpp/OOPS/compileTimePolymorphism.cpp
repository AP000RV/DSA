#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(char name){
        cout << "Hemlo " << name << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }
};

int main(){

    A obj;
    obj.sayHello("Apj");    // Hello Apj
    obj.sayHello('a');      // Hemlo a

    return 0;
}

// Function overloading
// so we can give diff type of arguments or diff no. of arguments so the function will overloaded