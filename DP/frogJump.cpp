#include<bits/stdc++.h>
using namespace std;

int f(int ind, vector<int>&height,vector<int>&dp){
    if(ind==1) return 0;
    if(dp[ind] != -1) return dp[ind];
    int left = f(ind-1,height, dp) + abs(height[ind] - height[ind-1]);
    int right = INT_MAX;
    if(ind>1) right = f(ind-2, height,dp) + abs(height[ind] - height[ind-2]);
    return dp[ind] = min(left,right);
}

int frogJump(int n, vector<int>&height){
    vector<int>dp(n+1,-1);
    return f(n-1, height,dp);

}