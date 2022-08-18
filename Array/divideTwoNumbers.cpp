class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a= (long)dividend/divisor;
       
        if(a>INT_MAX){return INT_MAX;}
        else if(a<INT_MIN) return INT_MIN;
        else return a;
        
    }
};