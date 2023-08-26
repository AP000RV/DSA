#include <iostream>
using namespace std;

class Human{
    public:
        int height, weight, age;
    public:
        int setAge(int a){
            age = a;
        }
        int getAge(){
            return this -> age;
        }
        void SetWeight(int w){
            this -> weight = w;
        }
};

class Male: public Human{
    public:
        string color;
        void sleep(){
            cout<<"Male is Sleeping " << endl;
        }

        void getup(){
            cout<< "Male gets up " << endl;
        }
         
        string getColor(){
            return this -> color;
        }

        void setcolor(string a){
                this -> color = a;
            }

        // void function()
        //     {
        //         cout << "This is apoorv " << endl;
        //     } 

};

int main(){

    Male *obj1 = new Male;      // dynamic memory allocation (inside HEAP)
    obj1->setAge(22);
    cout << "obj1.age :     " << obj1->age << endl;     // not set here so this will give garbage value
    cout << "obj1.height :  " << obj1->height << endl;  // not set here so this will give garbage value
    cout << "obj1.color :   " << obj1->color << endl;   // not set here so this will give garbage value

    obj1->SetWeight(84);
    cout << "obj1.weight :  " << obj1->weight << endl;  // 84
    
    obj1->setcolor("red");
    cout << "obj1.color :  " << obj1->color << endl;    // red
    

    obj1->sleep();      // male is sleeping

    obj1->getup();      // male gets up

    return 0;
}