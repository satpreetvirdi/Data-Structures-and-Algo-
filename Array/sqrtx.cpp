class Solution {
public:
    int mySqrt(int x) {
        int n = 1;
        int ans = 0;
        while (x - n >= 0)
        {
            x -= n;
            n += 2;
            ans++;
        }
        
        return ans;
    }
};