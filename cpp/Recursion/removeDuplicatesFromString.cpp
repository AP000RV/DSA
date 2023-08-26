#include<iostream>
using namespace std;

string removeDup(string s){

    if(s.length()==0) return "";

    char temp = s[0];
    string ans = removeDup(s.substr(1));

    if(temp==ans[0]) return ans;
    else return temp+ans;

}

int main(){

    cout << removeDup("aaaabbbeeecdddd");    
return 0;
}
