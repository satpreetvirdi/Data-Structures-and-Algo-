#include<bits/stdc++.h>
using namespace std;


  int main(){
    int t , a,b;
    cin >>t;
    while(t--){
     cin>>a>> b;
     
     while(a!=b && a<=b){
        if(a%2 == 0 ){
            a += 2;
        }else{
            a+=1;
        }
    }
    if(a == b ){
        cout<< "YES" << " ";
    }else{
        cout<< " NO"<< " ";
    }
    }

}