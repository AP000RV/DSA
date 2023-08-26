#include<iostream>

using namespace std;

class Animal{

    public:
    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog: public Animal{

// run this code twice

// comment and uncomment this and see the difference in o/p... 

    // public:
    // void speak(){
    //     cout << " Barking " << endl; 
    // }
    
};

int main(){

    Dog d;
    d.speak();
 
    return 0;
}