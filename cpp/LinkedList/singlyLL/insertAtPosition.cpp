#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node*temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node*temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}


void insertAtPosition(Node* &tail, Node* &head, int position, int data){

    // insert at start          
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    
    Node*temp = head;
    int count = 1;

    while(count < position -1){
        temp = temp -> next;
        count++;
    }

    // insert at last position 

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    // creating a node for data

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}


void print(Node* &head){

    if(head == NULL){
        cout << "List is Empty " << endl;
        return;
    }

    Node* temp = head;
    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 1, 22);
    print(head);
    
    insertAtPosition(tail, head, 5, 23);
    print(head);

    insertAtPosition(tail, head, 2, 24);
    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;


    return 0;
}