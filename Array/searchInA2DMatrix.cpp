class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i : matrix){
            for(auto it:i){
                if(it==target) return true;
            }
        }
        return false;
    }
};