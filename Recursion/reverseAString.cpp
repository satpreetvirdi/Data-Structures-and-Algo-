#include<iostream>
using namespace std;

// Reverse a string
int reverseAString(string s){
    if(s.length()==0){
        return 0;
    }
    string remaingStr = s.substr(1);
    reverseAString(remaingStr);
    cout<<s[0];


}

int main (){

    reverseAString("satpreet");
    return 0;

}