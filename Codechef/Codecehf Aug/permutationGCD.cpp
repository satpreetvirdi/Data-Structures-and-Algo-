#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    if(b<a){
	        cout<<-1<<endl;
	        continue;
	    }cout<<b-a+1<< " ";
	    for(int i=1;i<=a;i++){
	        if(i!= b-a+1){
	            cout<<i<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
