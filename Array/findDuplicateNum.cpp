class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int ans;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it :mp){
            if(it.second >=2){
                 ans = it.first;
                break;            
            }
         }
        return ans;
    }
    
};