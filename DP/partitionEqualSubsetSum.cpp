class Solution {
public:
    bool subsetSum(int idx, int target,vector<int>&arr,vector<vector<int>>&dp){
        if(target==0) return true;
        if(idx==0) return arr[0]==target;
        if(dp[idx][target]!= -1) return dp[idx][target];
        bool notTaken = subsetSum(idx-1,target,arr,dp);
        bool taken = false;
        if(target>=arr[idx]){
            taken = subsetSum(idx-1,target-arr[idx],arr, dp);
        }
        return dp[idx][target] = notTaken or taken;
    }
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum=0;
        for(auto it : nums)totalSum+=it;
        
        
        if(totalSum%2) return false;
        vector<vector<int>> dp(n,vector<int> (totalSum+1,-1));
        return subsetSum(n-1,totalSum/2,nums,dp);
    }
};