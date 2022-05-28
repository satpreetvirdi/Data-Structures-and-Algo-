#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextSmallerEle(vector<int> a){
    int l = a.size();
    stack<int> s;
    while(l--){
        while(!s.empty() && s.top()>=a[l]){
            s.pop();
        }
        if(s.empty()){
            cout<< -1 <<endl;
        }else{
            cout<<s.top()<<endl;
        };
        s.push(a[l]);
    }
}


int main(){
    vector<int> a = {3,10,5,1,15,10,7,6};
    nextSmallerEle(a);
    return 0;
}