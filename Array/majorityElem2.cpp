class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }
        vector<int>ans;
        int temp;
    for(auto it:mp){
        if(it.second>(nums.size())/3){
            temp = it.first; 
            ans.push_back(temp);
        }
    }
     return ans; 
    }
};