#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x1 ,y1 ,x2,y2;
    while(t--){ 
    cin>>x1 >>y1;
    cin>>x2>>y2;

    if(( abs((x1+2)-x2) , abs(y1+1-y2)) == ( abs((x1+2)-x1) , abs(y1+1-y1)) || 
    (abs((x1+1) -x2) , abs(y1+2-y2)) == (abs((x1+1)-x2) , abs(y1+2-y1)) || 
     (abs((x1-2) -x2) , abs(y1-1-y2)) == (abs((x1-2)-x2) , abs(y1-1-y1)) || 
      (abs((x1+1) -x2) , abs(y1+2-y2)) == (abs((x1+1)-x2) , abs(y1+2-y1))
    ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    }

}