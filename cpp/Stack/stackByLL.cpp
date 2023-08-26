#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

      //Destructor
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }    
        cout<<" Memory deleted with the value as "<<value<<endl;
    }
};


class Stack{
    public:
    int size;
    Node* head;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp -> data = data;
        temp -> next = head;
        head = temp;

    }

    void pop(){
        if(head == NULL){
            cout << "Stack is Empty" << endl;
        }
        else{
            Node* temp = head;
            head = head -> next;
            delete(temp);
        }
    }
    int peek(){
        if(head != NULL){
            int value = head -> data;
            return value;
        }
        else{
            return -1;
        }
    }

    bool isEmpty(){
        if(head >= 0){
            return true;
        }
        return false;
    }
};

int main(){

Stack st;
    st.push(5);
    cout<< " Stack top is "<<st.peek()<<endl;
    st.push(6);
    cout<< " Stack top is "<<st.peek()<<endl;
    st.pop();
    cout<< " Stack top is "<<st.peek()<<endl;
    st.pop();
    cout<< " Stack top is "<<st.peek()<<endl;

    cout << "Stack is Empty???" << " ";
    if(st.isEmpty()){
        cout << "   True" << endl;
    }
    else{
        cout << "   False" << endl;
    }
    
    return 0;
}