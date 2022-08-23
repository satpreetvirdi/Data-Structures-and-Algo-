class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it : nums){
            pq.push(it);
        }
        int ans= 0;
        for(int i=0;i<k;i++){
          if(i==k-1) ans = pq.top();
            pq.pop();
        }
        return ans;
    }
    
};