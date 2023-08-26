#include<iostream>

using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else    cout << "Stack Overflow" << endl;
        
    }   

    void pop(){
        if(top >= 0) top--;
        else    cout << "Stack Underflow" << endl;
    }     

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout << "Stack Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == 0) return true;
        else    return false;
    }

};

int main(){

    // creation stack "st" of size 5
    Stack st(5);

    /// operations...
    st.push(22);
    st.push(20);
    cout << "top element: "<< st.peek() << endl;
    
    st.pop();
    cout << "top element: " << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;  // stack underflow

    if(st.isEmpty())
        cout << "Stack is empty!!!" << endl;
    else
        cout << "Stack is not empty!!!" << endl;

    return 0;
}