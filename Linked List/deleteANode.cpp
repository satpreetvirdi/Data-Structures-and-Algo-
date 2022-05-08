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
void deleteAtHead(node* &head){
    node* toDelete=head;
    head = head->next;
    delete toDelete;

}
void deleteANode(node* &head , int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
    }
    node*temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;


}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head,2);
    insertAtTail(head, 3);
    display(head);
    deleteANode(head, 2);
    display(head);
    return 0 ;

};