// codestudio Question

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void solve(stack<int>& s, int x){
    // base case
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
     
    solve(s, x);
    s.push(num);
    
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
        return myStack;
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(0);
    int x = 4; 

    pushAtBottom(st, x);

    cout << endl << "current Stack After insertion at Bottom: ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << endl;

    return 0;
}