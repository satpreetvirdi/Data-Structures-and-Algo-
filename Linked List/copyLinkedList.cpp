/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter = head;
        Node* front = head;
        
        //  First round : make copy of each node,
        // and link them together side-by-side in a single list.
        while(iter!=NULL){
            front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next =  front;
            
            iter = front;
        }
        // Second Round : assign random pointer to the copy nodes
        
        iter = head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }
        // Restore the original list and detach the nodes from original linked list
        iter = head;
        Node* pseudohead = new Node(0);
        Node* copy = pseudohead;
        
        while(iter!=NULL){
            front = iter->next->next;
            copy->next= iter->next;
            iter->next = front;
            
            copy = copy->next;
            iter = front;
                
        }
        return pseudohead->next;
    }
};