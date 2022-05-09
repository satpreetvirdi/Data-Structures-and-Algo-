#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insert a Node at tail(end)

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

// Iterative way
node* reverseLinkedList(node* &head){

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr ;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;

    }
    return prevptr;
}

// Recursive Way
node* recursive(node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newHead = recursive(head->next);
    head->next->next= head;
    head->next = NULL; 
    return newHead;
}


int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head,2);
    insertAtTail(head, 3);
    display(head);
    node* newHead = recursive(head);
    display(newHead);
    return 0 ;

};