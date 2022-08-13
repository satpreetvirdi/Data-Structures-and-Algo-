int f(int idx,int w,vector<int>&wt,vector<int>&value,vector<vector<int>>&dp){
    if(idx==0){
        if(wt[0]<=w) return value[0];
        return 0;
    }
    if(dp[idx][w] != -1) return dp[idx][w];
    int notTake=0+ f(idx-1,w,wt,value,dp);
    int take = INT_MIN;
    if(wt[idx]<=w) take = value[idx] +f(idx-1,w-wt[idx],wt,value,dp);
    return dp[idx][w]=max(take,notTake);

}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
    return f(n-1,maxWeight,weight,value,dp);
}