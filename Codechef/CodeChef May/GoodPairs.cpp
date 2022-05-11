#include<iostream>
#include<vector>
using namespace std;




int main(){
    int t;
    cin>>t;
    vector<int>A;
    vector<int>B;
    int ans;
     
    for(int i=0;i<t ;i++){
       int n;
        cin>>n;
       for(int i = 0 ; i<n ;i++){
           cin>>ans;
           A.push_back(ans);
       }
        for(int j = 0 ; j<n ;j++){
           cin>>ans;
           B.push_back(ans);
       }  
         int count = 0 ;
       for(int i=0; i<n;i++){
           
        int x =A[i] , y = B[i];
        for(int j=i+1;j<n;j++){
            
            if(x==B[j] && y ==A[j])
            count++;
            cout<<count<<endl;
        
        }
       }
          

    }
    
    
     return 0;

}