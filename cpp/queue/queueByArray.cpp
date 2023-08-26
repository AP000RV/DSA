#include <iostream> 

using namespace std;

class Queue{
    int *arr, qfront, rear, size;

    public:

    Queue(int size){

    this -> size = size;
    arr = new int [size];
    qfront = 0, rear = 0;
    }

    bool isEmpty(){
        if(qfront == rear) return true;
        else return false;
    }

    void enqueue(int data){
        if(rear == size){
         //cout << "Queue is Full " << endl;

        size *= 2;
        int* newArr = this->arr;

        size *= 2;
        new int[this->size];

        for(int i=0; i<rear - qfront; i++){
            arr[i] = newArr[i+qfront];
        }
        rear -= qfront;
        qfront = 0; 
        
        }
        arr[rear++] = data;

        if(qfront == size) cout << "Queue is Full" << endl;
        else{
            arr[qfront] = data;
            qfront++;
        }
    }

    int dequeue(){
        if(qfront == rear) return -1;
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0, rear = 0;
            }
            return ans;
        }

    }

    int front(){
        if(qfront == rear) return -1;
        else return arr[qfront];
    }

    void display() {
		for (int i = qfront; i < rear; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void displayAll() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "Size:" << this->size << endl;
		cout << "Start:" << this->qfront << endl;
		cout << "End:" << this->rear << endl;
	}
};


int main(){

    Queue q(8);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    // q.enqueue(8);
    // q.enqueue(9);
    // q.enqueue(10);

    // q.display();
    // q.displayAll();

    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();
    // q.dequeue();

    q.display();
    q.displayAll();

    cout << "Queue is Empty??? " << q.isEmpty();

    return 0;
}