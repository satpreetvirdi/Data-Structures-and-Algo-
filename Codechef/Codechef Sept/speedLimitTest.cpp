#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int d1,d2,t1,t2;
        cin>>d1>>t1>>d2>>t2;
        float p = (float)d1/t1;
        float q = (float)d2/t2;
        if(p>q){
            cout<<"ALICE"<<endl;
        }else if(p<q){
            cout<<"BOB"<<endl;
        }else if(p==q){
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}
