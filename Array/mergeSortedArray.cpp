class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
        for(int i=0;i<m;i++) ans.push_back(nums1[i]);
        for(auto it: nums2) ans.push_back(it);
        nums1.clear();
        for(auto it :ans ) nums1.push_back(it);
        ans.clear();
        sort(nums1.begin(),nums1.end());
       
    }
};