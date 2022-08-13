int mod = (int)(1e9 + 7);
int f(int idx,int target,vector<int>&arr,vector<vector<int>>&dp){
        
        if(idx==0) {
        if(target == 0 && arr[0]==0) return 2;
        if(target ==0 || target == arr[0]) return 1;
            return 0;
        }
        if(dp[idx][target] != -1 ) return dp[idx][target];
        int notPick = f(idx-1,target,arr,dp);
        int pick = 0;
        if(arr[idx]<=target) pick = f(idx-1,target-arr[idx],arr,dp);
        
        return dp[idx][target] = (notPick + pick)%mod;
    }
    int findWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
       
        return f(n-1,target,nums,dp);
    }

int countPartitions(int n, int d, vector<int> &arr) {
    int sum =0;
    for(auto &it :arr) sum+=it;
    if(sum-d <0 || (sum-d)%2) return false;
    return findWays(arr,(sum-d)/2);
}


