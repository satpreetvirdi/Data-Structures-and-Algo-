#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n ,x;
    int m = 1000000007;
    int ans =0;
    while(t--){
        cin>>n>>x;
        if(n==1 ){
            cout<< 1 * x <<endl;
        }
        if(n !=1){
             for(int i = 1 ; i<=n ; ++i){
                  ans+= x;
                }
              cout<<ans;

        }
       


    }

}