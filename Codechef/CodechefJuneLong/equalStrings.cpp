#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
      long long  int n,k, co=0;
      cin>>n;
        string a,b,c = " ";
        cin>>a>>b;
        for(int i=0; i<n;++i){
            if(a[i] == b[i]) {
                co+=1;
            }
            else{
                k+=1;
                c+=b[i];
            }
        }
        sort(c.begin(), c.end());
        int ans = 0;
        for(int i = 0; i<c.size()-1;++i){
            if(c[i]!=c[i+1]){
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
}