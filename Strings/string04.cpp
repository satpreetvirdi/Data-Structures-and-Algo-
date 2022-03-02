#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Ques: Number of reoccurence of character     

int main (){

    string s = "fdfddfsngspqwbnppppewqbzzzmfd";

    int freq[26];

    for(int i=0; i<26; i++){
        freq[i]=0 ;
    }

    for(int i=0 ; i<s.size(); i++){
        freq[s[i] - 'a']++; 
    }
    char word = 'a';
    int maxF = 0;

    for(int i=0 ; i<26; i++){
        if(freq[i]> maxF){
            maxF = freq[i];
            word = i + 'a';
        }
    }
    cout<< " Max Frq is "<< maxF<<" & The word is "<<word<<endl;


    return 0; 
}