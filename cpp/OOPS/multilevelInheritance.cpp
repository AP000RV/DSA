#include<iostream>
using namespace std;

class Animal{
    public: 
        int age, weigth;
    
    public:
        void speak(){
            cout<< "Animal Speaking" << endl;
        }
};

class Dog: public Animal{
    public:
    void barking(){
        cout << "D0g Barkinggg" << endl;
    }
};

class GermanShepherd: public Dog{
    public:
    void sleeping(){
        cout << "GermanShepherd sleeping" << endl;
    }
};

int main(){

    GermanShepherd g;
    g.speak();
    g.barking();
    g.sleeping();
    cout << g.age << endl;

    return 0;
}