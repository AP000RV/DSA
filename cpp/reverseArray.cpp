#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(12);
    v.push_back(1);
    v.push_back(18);
    v.push_back(11);
    v.push_back(2);

    int s=0,e=v.size()-1;

    while(s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    cout<< "REVERSE ARRAY: "; 
    for(int i=0; i<v.size();i++)
    {
        cout<< v[i] << " ";
    }
    return 0;
}