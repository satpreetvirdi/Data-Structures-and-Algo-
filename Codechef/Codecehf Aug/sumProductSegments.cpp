#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int x1=1;
        long long int x2=b;
        for(int i=1;i<=sqrt(b);i++){
            if(b%i==0){
                x1=i;
                x2=b/x1;
            }
        }
        long long int s1=a/2;
        long long int s2 = a-s1;
        if((s1<=x1)&&(s2>=x1) || (x1<=s1)&&(x2>=s1)){
            cout<< -1<<endl;
        }else{
            cout<<s1<<" "<<s2<<endl;
            cout<<x1<<" "<<x2<<endl;
        }
    }
	return 0;
}
