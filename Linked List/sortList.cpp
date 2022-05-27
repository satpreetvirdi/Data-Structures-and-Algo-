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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        
        
        ListNode* temp = NULL;
        ListNode* slow =head;
        ListNode* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        temp = slow;
        slow = slow->next ;
        fast = fast->next->next;
        
    }
    temp->next =NULL;
    ListNode* list1 = sortList(head);
    ListNode* list2 = sortList(slow);
    
    return mergeList(list1 , list2);
};

    ListNode* mergeList(ListNode* head1 ,ListNode* head2){
        ListNode* fhead = NULL , *ftail=NULL;
        while(head1!=NULL && head2!=NULL){
            if(fhead == NULL && ftail == NULL){
            if(head1->val>head2->val){
                fhead = head2;
                ftail = head2;
                head2 = head2->next;
            }else{
                fhead = head1;
                ftail = head1;
                head1= head1->next;
            }
        }
        if(head1 && head2){
            if(head1->val>head2->val){
                 ftail->next = head2;
                ftail = ftail->next;
                head2 = head2->next;
            }else{
                ftail->next = head1;
                ftail = ftail->next;
                head1 = head1->next;
                
            }
        }
       }
     if(head1!=NULL){
          ftail->next= head1;
      } 
        if(head2!=NULL){
            ftail->next = head2;
     }
        
     return fhead;   
    }
    };