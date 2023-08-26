#include<iostream>
using namespace std;

class Animal{
    public: 
        int age, weigth;
    
    public:
        void speak(){
            cout<< "Barking" << endl;
        }
};

class Dog: public Animal{

};

int main(){

    Dog d;
    d.speak();
    cout << d.age << endl;

    return 0;
}