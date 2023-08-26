#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length() == 0 )    return;

    string temp = s.substr(1);
    reverse(temp);
    cout << s[0] ;
    
}


int main(){
    
    string str = "binod";    
    reverse(str);

    return 0;
}