class Solution {
public:
    bool isPallindrome(int i,int j,string &s){
        if(i>=j) return true;
        if(s[i]!=s[j]) return false;
        return isPallindrome(i+1,j-1,s);
    } 
    int f(int i,int j,string&s,vector<int>&dp){
        int n = s.size();
        if(i==n) return 0;
        if(dp[i] != -1) return dp[i];
        int minCost = INT_MAX;
        
        for(int j=i;j<n;j++){
            if(isPallindrome(i,j,s)){
                int cost = 1 + f(j+1,n,s,dp);
                minCost = min(minCost,cost);
            }
        }
        return dp[i] = minCost;
    }
    int minCut(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        return f(0,n,s,dp) - 1;
    }
};