#include <iostream>

using namespace std;

class Animal{
    
    public:
    int age, weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class Human{

    public:
    string color;
    public:
    void speak(){
        cout<< "Speaking" << endl;
    }

};

// multiple inheritance

class Hybrid : public Human, public Animal{

};

int main(){

    Hybrid obj;
    obj.speak();
    obj.bark();

    return 0;
}