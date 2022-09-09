#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long cnt=0;
        long n;
        cin>>n;
        unordered_map<long,long>mp;
        long ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            mp[ele]++;
        }
        for(auto it :mp){
            if(it.second>2){
                while(it.second>0){
                    cnt+=it.second-1;
                    it.second = it.second -1;
                }
            }
            if(it.second == 2){
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
	return 0;
}
