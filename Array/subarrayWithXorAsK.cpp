#include<bits/stdc++.h>
using namespace std;
// Refer GFG for same

int f(vector<int>&A,int B){
    map<int,int>freq;
    int cnt=0,xorr=0;
    for(auto it:A){
        xorr = xorr^it;
        if(xorr == B)cnt++;
        if(freq.find(xorr^B)!=freq.end()){
            cnt+=freq[xorr^B];
        }
        freq[xorr]+=1;
    }
    return cnt;
}