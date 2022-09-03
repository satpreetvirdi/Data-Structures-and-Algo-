class Solution {
public:
     vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        int n = nums.size();
        for(int i = n - 1; i >= 0; i--){
            st.push(nums[i]); //initially store the stack in circular order 
        }
        
        vector<int> res(n);
		//rest of the code is similar to code for next greater element using stack.
        for(int i = n - 1; i >= 0; i--){
            res[i] = -1;
            while(!st.empty() && nums[i] >=  st.top()){
                st.pop();
            }
            if(!st.empty())
                res[i] = st.top();
            
            st.push(nums[i]);
        }
        return res;
    }
};