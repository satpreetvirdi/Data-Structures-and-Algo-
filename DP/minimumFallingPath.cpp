class Solution {
public:
    int f(int end,int i,int j,vector<vector<int>>&dp,vector<vector<int>>&matrix){
        if(j<0 || j>=end) return 1000000;
        
        if(i==end-1 ) return matrix[i][j];
        
        
            if(dp[i][j] != -1) return dp[i][j];        
            int down = matrix[i][j] + f(end,i+1,j,dp,matrix);
            int rdiag = matrix[i][j] + f(end,i+1,j+1,dp,matrix);
            int ldiag =matrix[i][j] + f(end,i+1,j-1,dp,matrix);
            int ans = min(down,rdiag);
            return dp[i][j] = min(ans,ldiag);
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mini = 1e9;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            mini = min(mini, f(n,0,i,dp,matrix));
        }
        return mini;
    }
};