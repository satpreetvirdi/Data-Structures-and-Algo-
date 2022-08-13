#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    int n = max(a,b);
	    int y=min(a,b);
	    for(int i=y;;i*=2){
	        if(n==i){
        	  cout<<"YES"<<endl;
        	  break;
	        }
	        if(i>n){
	            cout<<"NO"<<endl;
	            break;
	        }
	           
	    }
	    
	    }
	    
	        

}
