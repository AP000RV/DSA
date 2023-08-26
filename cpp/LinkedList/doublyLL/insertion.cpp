#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    // constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new  Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    cout << "-----INSERTION AT HEAD-----" << endl;

    print(head);
    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 1);
    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtHead(head, -4);
    print(head);

    cout << "-----INSERTION AT TAIL-----" << endl;
    
    insertAtTail(tail, 25);
    print(head);

    insertAtTail(tail,56);
    print(head);

    insertAtTail(tail, 22);
    print(head);

    insertAtTail(tail, -44);
    print(head);

    return 0;
}