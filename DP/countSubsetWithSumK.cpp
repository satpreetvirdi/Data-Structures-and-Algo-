
    int f(int idx,int target,vector<int>&arr,vector<vector<int>>&dp){
        if(target ==0) return 1;
        if(idx==0) return arr[0] == target;
        if(dp[idx][target] != -1 ) return dp[idx][target];
        int notPick = f(idx-1,target,arr,dp);
        int pick = 0;
        if(arr[idx]<=target) pick = f(idx-1,target-arr[idx],arr,dp);
        
        return dp[idx][target] = notPick + pick;
    }
    int findWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
       
        return f(n-1,target,nums,dp);
    }
