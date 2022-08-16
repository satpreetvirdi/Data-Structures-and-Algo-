class Solution {
public:
    int f(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
       
        if( i<0 || j<0 ) return 0;
        
        if(dp[i][j] != -1 ) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j] =  1 + f(s1,s2,i-1,j-1,dp);
        
        return dp[i][j] = max(f(s1,s2,i,j-1,dp),f(s1,s2,i-1,j,dp));
    }
    
    int longestPalindromeSubseq(string s) {
        string t = s ;
        reverse(t.begin(),t.end());
        int n = s.size();
         vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return f(s,t,n-1,n-1,dp);
    }
    int minInsertions(string s) {
        return s.size() - longestPalindromeSubseq(s);
    }
};