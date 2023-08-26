#include<iostream>
using namespace std;

class Queue {
private:
	int* arr;
	int start;
	int end;
	int size;
public:
	Queue(int size) {
		this->size = size;
		arr = new int(this->size);
		start = this->end = 0;
	}

	void enqueue(int data) {

		if (this->end == this->size) {
			this->size *= 2;
			int* newArr = this->arr;

			this->size *= 2;
			new int[this->size];

			for (int i = 0; i < this->end - this->start; i++) {
				this->arr[i] = newArr[i + start];
			}
			this->end = this->end - this->start;
			this->start = 0;
		}
		this->arr[this->end++] = data;

            if(start == size) cout << "Queue is Full " << endl;
        else{
            arr[start] = data;
            start++;
        }   
	}

	void display() {
		for (int i = this->start; i < this->end; i++) {
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}

	void displayAll() {
		for (int i = 0; i < this->size; i++) {
			cout << this->arr[i] << " ";
		}
		cout << endl;
		cout << "Size:" << this->size << endl;
		cout << "Start:" << this->start << endl;
		cout << "End:" << this->end << endl;
	}
};

int main() {
	Queue q(2);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(9);
    q.enqueue(10);
	q.display();
	q.displayAll();
	
	return 0;
}