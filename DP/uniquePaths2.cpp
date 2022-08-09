
class Solution {
public:
        // int mod = (int)(1e9 + 7);

    int f(int i,int j , vector<vector<int>> &dp,vector<vector<int>>&obstacleGrid){
        if(i>=0 && j>=0 && obstacleGrid[i][j] == 1) return 0;
         if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        else if(obstacleGrid[i][j]==0){
        int up=0,left=0;    
         up = f(i-1, j,dp,obstacleGrid);
         left = f(i,j-1,dp,obstacleGrid);
        return  dp[i][j] = up + left;    
        }
        return 0;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
         return f(n-1,m-1,dp,obstacleGrid);
    }
};