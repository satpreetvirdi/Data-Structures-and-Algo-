#include<bits/stdc++.h>
using namespace std;

int avgperm(){
    int n;
    cin>>n;
    if(n==3){
        cout<<1<<" "<<2<<" "<<3<<endl;
        return 0;
    }
    cout<< n << " "<<n-2<<" ";
    for(int i=1;i<n-3;i++){
        cout<<i<<" ";
    }
    cout<< n-3<<" "<< n-1<<endl;
    return 0;
}

int main(){
    int t;cin>>t;
    while(t--){
        avgperm();
    }
};