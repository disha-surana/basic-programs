#include <stdio.h>
#include <bits/stdc++.h> 

using namespace std; 
  
/* a node of the singly linked list */
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
  
void segregateEvenOdd(Node **head_ref)  
{  
    if(*head_ref==NULL)
        return;
        
    Node *end = *head_ref;  
    Node *prev = NULL;  
    Node *curr = *head_ref;  
  
    /* Get pointer to the last node */
    while (end->next != NULL)  
        end = end->next;  
  
    Node *new_end = end;  
    
    while(curr!=end)
    {
        //cout<<curr->data<<" ";
        if(curr->data%2==0){
            prev = curr;
            curr = curr->next;
        }
        else{
            new_end->next = curr;
            if(prev==NULL){
                *head_ref = (curr->next);
            }
            else{
                prev->next = curr->next;
            }
            curr = curr->next;
            new_end = new_end->next;
            new_end->next = NULL;
        }
    }
    
    if(curr->data%2!=0)
    {
        new_end->next = curr;
        if(prev==NULL){
            *head_ref = (curr->next);
        }
        else{
            prev->next = curr->next;
        }
        new_end = new_end->next;
        new_end->next = NULL;
    }
   
}  
  
void reverse(Node** head)
{
    Node *p=*head, *q, *r=NULL;
    
    while(p!=NULL)
    {
        q = p->next;
        p->next = r;
        r = p;
        p = q;
    }
    
    *head = r;
    
}
  
/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning */
void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node = new Node(); 
  
    /* put in the data */
    new_node->data = new_data;  
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);  
  
    /* move the head to point to the new node */
    (*head_ref) = new_node;  
}  
  
/* Function to print nodes in a given linked list */
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout << node->data <<" ";  
        node = node->next;  
    }  
}  
  
/* Driver code*/
int main()  
{  
    /* Start with the empty list */
  
    int times,n,num;
    cin>>times;
    for(int i=0;i<times;i++){
        cin>>n;
        Node* head = NULL;
        for(int j=0;j<n;j++){
            cin>>num;
            push(&head, num); 
        }
        
        reverse(&head);
        segregateEvenOdd(&head); 
        //cout<<"\nAns: ";
        printList(head);  
        cout<<"\n";
  
    }
    
    return 0;  
}  