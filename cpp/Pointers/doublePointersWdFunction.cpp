#include<iostream>
using namespace std;

void update(int **p2) {
    // p2 = p2 + 1;
    //kuch change hoga  - NO

    // *p2 = *p2 + 1;
    //kuch change hoga - YES

    // **p2 = **p2 + 1;
    //kuch change hoga - YES
}


    // void update(int *p){
    //     *p = (*p)  *  2;
    // }
    //     void increment(int **p){
    //     ++(**p);
    // }
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    //  // how to return 5...

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // //   // how to return address of i or value of p...

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // //   // how to return address of p or value of p2...

    // cout << &p << endl;
    // cout << p2 << endl;

    //  //   <<<function calls from here...>>>

    cout << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl;


        // int num = 110;
        // int *ptr = &num;
        // increment(&ptr);
        // cout << num << endl;



    return 0;
}