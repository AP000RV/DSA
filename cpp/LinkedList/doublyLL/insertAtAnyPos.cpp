#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    // constructor
    Node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

void insertAtPos(Node* &head, Node* &tail, int position, int data){

    if(position == 1){
    //  ----insertAtHead----
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count< position-1){
        temp = temp -> next ;
        count++;
    }
    
    //  ----insert at last node----
    if(temp -> next == NULL){
        //  insert At Tail
        
        Node* t = new Node(data);
        tail -> next = t;
        t -> prev = tail;
        tail = t;
        return; 
    }

    //  creating a new Node for Data

    Node* nodeToInsert = new Node(data);    
    
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

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

    print(head);
    cout << "HEAD: " << head -> data << " ";
    cout << "TAIL: " << tail -> data << endl;

    insertAtPos(head, tail, 1, 11);
    print(head);
    cout << "HEAD: " << head -> data << " ";
    cout << "TAIL: " << tail -> data << endl;

    insertAtPos(head, tail, 2, 13);
    print(head);
    cout << "HEAD: " << head -> data << " ";
    cout << "TAIL: " << tail -> data << endl;

    insertAtPos(head, tail, 4, 12);
    print(head);
    cout << "HEAD: " << head -> data << " ";
    cout << "TAIL: " << tail -> data << endl;

    return 0;
}