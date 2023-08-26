#include <iostream>
#include"bits/stdc++.h"

using namespace std;


/*
int main(){

    // creation of a map
    map<int, int> m;
        
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));

    m[7] = 100;      // another way to insert in map


    // // iteration - 1 

    // cout << "key" << '\t' << "value" << endl;
    // for(auto i:m)
    // cout << i.first << "\t" << i.second << endl;

//  // iteration - 2

    map<int,int>::iterator itr;
    cout << "key" << '\t' << "value" << endl;
    for(itr = m.begin(); itr != m.end(); ++itr)
    cout << itr->first << "\t" << itr->second << endl;


    
    cout<< "Max Size: " << m.max_size() << endl;
    cout<< "Size: " << m.size() << endl;


    return 0;
}

*/




// //----MAPS STL----


int main(){

    string s = "loveleetcode";

    unordered_map<char, int> m;

    for(int i=0;i<s.length(); i++){
        m[s[i]]++;
    }

    for(pair<char, int> a : m){
        cout << a.first << " -> " << a.second << endl;
    }
}