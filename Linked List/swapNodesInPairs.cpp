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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nex = NULL;
        
        if(head==NULL || head->next==NULL) return head;
        
        int count = 0;
        while(curr!=NULL && count<2){
            nex = curr->next;
            curr->next= prev;
            prev= curr;
            curr = nex;
            count++;
        }
        
        if(nex!=NULL){
            head->next = swapPairs(nex);
        }
        return prev;
    }
};