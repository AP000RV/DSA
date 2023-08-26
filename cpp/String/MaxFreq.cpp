#include<iostream>
using namespace std;

int main(){

    string s = "Hii there i am apoorv jain nice to meet you";
    int freq[26];

    for(int i=0; i<26; i++){
        freq[i]=0;
    }

    for(int i=0; i<s.length(); i++){
        freq[s[i] - 'a']++;                       // // // ----------- Storing char at there own place ------------
    }
    // // // ----- freq array me String ke ith position pr jo char hai usme se a minus krke value add krdo e.g. yadi b hai then b-a krege to 1st index pr b ki ek occrence plus ho jayegi.... ---- -- ----- // // // // 

    int maxOccerence = 0;
    char ans = 'a';
    for(int i=0; i<26; i++){
        if(freq[i] > maxOccerence){
            maxOccerence = freq[i];
            ans = i+'a';                        //  /   //  // ------------- Returning the character ------------
        }
    }

    cout << maxOccerence << " " << ans << endl;
return 0;
}