class Solution {
public:
   
    
    int f(int idx,int target,vector<int>&arr,vector<vector<int>>&dp){
       if(idx==0){
            if(target==0 and arr[0]==0) return 2;
            if(target==0 or target==arr[0]) return 1;
            return 0;
        };
        if(dp[idx][target] != -1 ) return dp[idx][target];
        int notPick = f(idx-1,target,arr,dp);
        int pick = 0;
        if(arr[idx]<=target) pick = f(idx-1,target-arr[idx],arr,dp);
        
        return dp[idx][target] = notPick + pick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum=0;
        for(auto i:nums) sum+=i;
        if(sum-target < 0 or (sum-target)%2) return 0;
        vector<vector<int>> dp(n,vector<int>((sum-target)/2 +1,-1));
       
        return f(n-1,(sum-target)/2,nums,dp);
    }

};