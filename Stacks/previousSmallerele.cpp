#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevSmallerele( vector<int>a ){
    stack<int> s;
    for(int i=0;i<a.size();i++){
        while(!s.empty() && s.top()>=a[i]){
            s.pop();
        }
        if(s.empty()){
            cout<< -1 <<endl;
        }else{
          cout<<s.top()<<endl;
        }
        s.push(a[i]);
    }
}

int main(){

    vector<int> a = {4,10,5,18,3,12,7};
    prevSmallerele(a);
    return 0;
}