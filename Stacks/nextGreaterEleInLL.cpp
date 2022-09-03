/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<int>st;
        
        //convert the LL in ans(array/vector)
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        for(int i=ans.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=ans[i]) st.pop();
            int x=ans[i];
            if(!st.empty()) ans[i]=st.top();
            else ans[i]=0;
            
            st.push(x);//the original ans[i]
        }
        return ans;
    }
};