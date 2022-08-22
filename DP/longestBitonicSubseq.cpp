#include<bits/stdc++.h>
using namespace std;
int longestIncreasingSubsequence(int arr[], int n){
    
    vector<int> dp(n,1);
    
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<arr[i]){
                dp[i] = max(dp[i], 1 + dp[prev_index]);
            }
        }
    }
    vector<int>dp2(n,1);
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<arr[i]){
                dp2[i] = max(dp2[i], 1 + dp2[prev_index]);
            }
        }
    }

    
    int ans = -1;
    
    for(int i=0; i<=n-1; i++){
        ans = max(ans,max(dp[i],dp2[i]));
    }
    
    return ans;
}