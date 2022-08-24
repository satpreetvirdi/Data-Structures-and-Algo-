class Solution {
public:
    bool checkPowersOfThree(int n) {
        stack<int>s;
        int i=1;
        while(i<=n){
            s.push(i);
            i*=3;
        }
        int sum=0;
        while(!s.empty()){
            if(sum+s.top()<=n){
                sum+=s.top();
            }
            s.pop();

        }
        return (sum==n);
        
    }
};