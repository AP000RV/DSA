#include<iostream>
using namespace std;

class Student{
    private: 
        string name;
        int age, height;

    public:
        int setAge(int a){
            age = a;
        }
        int getAge(){
            cout << "Age is "<< age << endl;
            return age;     //this -> age
        }    
};

int main(){
    Student first;
    cout << "Everything's Alright! " << endl;

    first.setAge(12);
    first.getAge();

    return 0;
}
// but sirf getter use krege to file readOnly hogi (means no one can change the DATA)
// as we know getter setter ki help se private class ko access kr skte hai...