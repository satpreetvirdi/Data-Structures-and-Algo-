int f(int i,int w,vector<int>&profit,vector<int>&weight,vector<vector<int>>&dp){
    if(i==0){
        return ((int)(w/weight[0])) * profit[0];
    }
    if(dp[i][w] != -1) return dp[i][w];
    int notTaken = 0 + f(i-1,w,profit,weight,dp);
    int taken = -1e9;
    if(weight[i]<=w) taken = profit[i]+ f(i,w-weight[i],profit,weight,dp);
    return dp[i][w]=  max(taken,notTaken);
        
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>> dp(n,vector<int>(w+1,-1));
   return f(n-1,w,profit,weight,dp);
}
