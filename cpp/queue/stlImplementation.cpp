#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <int> q;

    q.push(1);
    cout << "Front element " << q.front() << endl;
    cout << "size of queue " << q.size() << endl;

    q.push(2);
    cout << "Front element " << q.front() << endl;
    cout << "size of queue " << q.size() << endl;

    q.push(3);
    cout << "Front element " << q.front() << endl;
    cout << "size of queue " << q.size() << endl;

    q.pop();
    cout << "size of queue " << q.size() << endl;

    q.pop();
    q.pop();

    if(q.empty()) cout << "Queue is Empty" << endl;
    else    cout << "Queue is not Empty" << endl;

    return 0;
}