class Solution {
public:
    int f(int i,vector<int>&coins,int total,vector<vector<int>>&dp){
        if(i==0){
            return( total%coins[0] ==0);
             
        }
        if(dp[i][total] != -1 ) return dp[i][total];
        int notTake =  f(i-1,coins,total,dp);
        int take = 0;
        if(coins[i]<=total) take = f(i,coins,total-coins[i],dp);
        return dp[i][total] = take+notTake;
        
        
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,coins,amount,dp);
    }
};