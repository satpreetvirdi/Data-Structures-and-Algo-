class Solution{
public:
    int rec(int n, int prev1, int prev2){
        if(n == 0) return prev2;
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        return rec(n - 1, prev1, prev2);
    }
    
    int climbStairs(int n){
        if(n == 1) return 1;
        if(n == 2) return 2;
        int prev1 = 1, prev2 = 2;
        return rec(n - 2, prev1, prev2);
    }
};