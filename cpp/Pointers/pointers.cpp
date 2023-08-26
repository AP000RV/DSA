#include<iostream>

using namespace std;

int main(){


    //  <<<FIRST>>>

    int a=5;                        
    int *p = &a;

    cout<< "a : " << a << endl;     //  5
    cout<< "&a : " << &a << endl;   //  addr of a
    
    cout<< "p : " << p << endl;     //  addr of a
    cout<< "*p : " << *p << endl;   //  5
    cout<< "&p : " << &p << endl;   //  addr of p
    


    // <<<SECOND>>>

    // int num = 10;
    // int a = num;
    // cout<<"a Before "<< num << endl;   //  10
    // a++;
    // cout<<"a After " << num << endl;    //  10

    // int *p = &num;
    // cout<<"*P Before "<< num << endl;   //  10
    // (*p)++;
    // cout<<"*P After " << num << endl;   //  11

    // int *q = p;
    // cout<< p << " -> " << q << endl;    //  addr -> addr (SAME)
    // cout<< *p << " -> " << *q << endl;  //  11 -> 11

    //  <<<THIRD>>>
    //  pointer arithmetic

/*
    int i=3;
    int *t = &i;
    *t = *t +1;

    cout <<"i -> " << i << endl;        //  4
    cout << "Before i " << i << endl;   //  4
    i = i+1; 
    cout << "After i " << i << endl;    //  5
    cout<<endl;

    cout <<"*t -> " << *t << endl;      //  5
    cout << "Before t " << t << endl;   //  address 0x61ff08
    t = t+1; 
    cout << "After t " << t << endl;    //  address 0x61ff0c
*/

    // <<<FOURTH>>>

    // int arr[10] = {23, 122, 41, 67};
/*

   
    cout << "address of first memory block is " << arr << en    cout << "arr[0] " << arr[0] << endl;
    cout << "arr " << arr << endl;
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << "*arr       " << *arr << endl;
    cout << "*arr+1     " << *arr + 1 << endl;
    cout << "*(arr + 1) " << *(arr + 1) << endl;
    cout << "*(arr) + 1 " << *(arr) + 1 << endl;
    cout << "arr[2]     " << arr[2] << endl;
    cout << "*(arr+2)   " << *(arr+2) << endl;

*/

    // int i = 3;
    // cout << "i[arr] " << i[arr] << endl;

/*
   int temp[10] = {1,2};
   cout << " sizeof(temp) "  << sizeof(temp) << endl;
   cout << " sizeof(*temp) " <<  sizeof(*temp) << endl;
   cout << " sizeof(&temp) " <<  sizeof(&temp) << endl;

   int *ptr = &temp[0];
   cout << " sizeof(ptr) "  << sizeof(ptr) << endl ;
   cout << " sizeof(*ptr) " << sizeof(*ptr) << endl ;
   cout << " sizeof(&ptr) " << sizeof(&ptr) << endl ;

*/

//    int a[20] = {1,2,3,5};
//    cout << "&a[0] ->" << &a[0] << endl;     //  all three will guve same result...
//    cout << "&a " << &a << endl;
//    cout << "a "  << a << endl;

//    int *p = &a[0];
//    cout << "p " << p << endl;
//    cout << "*p "<< *p << endl;
//    cout << "&p -> " << &p << endl;

    

//    int arr1[10];

    // ERROR
    //    arr = arr+1;      //  not assignable...

    // int *ptr = &arr1[0];
    // cout << "ptr before " << ptr << endl;    //  addr : i.e. 710 
    // ptr = ptr + 1;
    // cout << "ptr after " <<  ptr << endl;    //  addr : 714 (4 bytes)

    // int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout << "arr " << arr << endl;      // addr of 1st index
    // cout << "ch " << ch << endl;        // abcde

    // char *c = &ch[0];
    // cout << "c " << c << endl;


    //  <<<POINTER TO FUNCTION>>> 


// void print(int *p) {

//     cout << *p << endl; 

// }

// void update(int *p) {

//    // p = p + 1;
//    //cout << "inside "<< p <<endl;
//    *p = *p + 1;

// }

// int getSum(int *arr, int n) {

//     cout << endl << "Size : " << sizeof(arr) << endl;

//     int sum = 0;
//     for(int i=0;i<n;i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
/*
    int value = 5;
    int *p = &value;
    //print(p);
    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    */

    // int arr[6] = {1,2,3,4,5,8};

    // cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

    // return 0;
// }


    return 0;
}