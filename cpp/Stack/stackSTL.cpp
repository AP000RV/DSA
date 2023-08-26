#include <iostream>
#include<stack>

using namespace std;


int main(){

    // creation of stack
    stack <int> s;

    // operations

    s.push(2);
    s.push(3);
    s.push(4);

    cout <<  "Top Element: " << s.top() << endl;
    s.pop();
    cout <<  "Top Element: " << s.top() << endl;

    if(s.empty())    cout << "Stack is empty.." << endl;
    else             cout << "Stack is not empty..." << endl;

    cout << "Stack Size: " << s.size() << endl;

    return 0;
}