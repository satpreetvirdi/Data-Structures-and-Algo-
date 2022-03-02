#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Ques: Form the biggest number from Numeric string 

int main(){

    string s = "3463699324";
    
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;

    return 0;
}