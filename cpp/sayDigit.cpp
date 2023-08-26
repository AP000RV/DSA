#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    //base case122
    if(n==0){
        return;
    }
    //processing
    int digit = n%10;
    n = n/10;

    // recursive call
    sayDigit(n,arr);
    cout<< arr[digit] << " ";

}

int main(){

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine"};
    int n;
    cout<< "Enter number: ";
    cin>> n;

    sayDigit(n, arr);
    cout<< endl;

    return 0;
}