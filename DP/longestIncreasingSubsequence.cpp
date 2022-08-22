class Solution {
public:
    int f(int i ,int prev,vector<int>&nums,vector<vector<int>>&dp){
        if(i == nums.size()) return 0;
        if(dp[i][prev+1]!= -2 ) return dp[i][prev+1];
        int len = f(i+1,prev,nums,dp);
        
        if(prev == -1 || nums[i] > nums[prev]){
            len  = max(len,1 + f(i+1,i,nums,dp));
        }
        return dp[i][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-2));
        return f(0,-1,nums,dp);
    }
};


// Tabulation
int longestIncreasingSubsequence(int arr[], int n){
    
    vector<int> dp(n,1);
    
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<arr[i]){
                dp[i] = max(dp[i], 1 + dp[prev_index]);
            }
        }
    }
    
    int ans = -1;
    
    for(int i=0; i<=n-1; i++){
        ans = max(ans, dp[i]);
    }
    
    return ans;
}