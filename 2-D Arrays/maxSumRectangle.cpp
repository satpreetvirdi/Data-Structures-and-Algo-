class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int ans = INT_MIN , row = matrix.size(), col = matrix[0].size();
        for(int l=0; l<col; l++)
        {
            vector<int> sum(row);
            for(int r = l; r<col; r++)
            {
                for(int i=0; i<row; i++)
                {
                    sum[i] += matrix[i][r];
                }
                
                set<int> st = {0};
                int maxiSum = 0;
                for(auto it : sum)
                {
                    maxiSum += it;
                    auto iterator = st.lower_bound(maxiSum - k);
                    if(iterator != st.end())
                        ans = max(ans, maxiSum - *iterator);
                    st.insert(maxiSum);
                }
            }
            
        }
        return ans;
    }
};