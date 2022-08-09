class Solution {
public:
    
    int f(int i,int j ,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(i==triangle.size()-1){
            return triangle[i][j];
        }
        if(dp[i][j] != -1 ) return dp[i][j];
        int down = triangle[i][j] + f(i+1,j,triangle,dp);
        int rdiag = triangle[i][j] + f(i+1,j+1,triangle,dp);
        
        return dp[i][j] = min(down,rdiag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
         if(triangle.size()==1){
             return triangle[0][0];
         }
         f(0,0,triangle,dp);
        return dp[0][0];
    }
};