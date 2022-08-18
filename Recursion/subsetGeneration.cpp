class Solution {
public:
    void f(int i ,vector<int>&nums,int n,vector<vector<int>>&ans,vector<int>&temp){
        if(i==n){ 
            ans.push_back(temp);
            return ;
        }
//         pick
        temp.push_back(nums[i]);
        f(i+1,nums,n,ans,temp);
//         Not Pick
        temp.pop_back();
        f(i+1,nums,n,ans,temp);
            
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int> temp;
        f(0,nums,n,ans,temp);
        return ans;
    }
};