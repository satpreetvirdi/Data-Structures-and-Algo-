#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        for(int i=1;i<=z;i++){
            w = w+x-y;
        }
        cout<<w<<endl;
    }
    return 0;
}
