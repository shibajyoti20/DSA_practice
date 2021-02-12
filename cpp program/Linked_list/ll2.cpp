#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node(int val)
        {
            data=val;
            next=NULL;
        }
};

void insertAtTail(node* &head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head =n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startnode;
    int count=1;

    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
//Implementation of Floyd Algorithm
bool detectCycle(node* &head)
{
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* head)
{
    node* fast=head;
    node* slow=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    
    fast=head;
    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main()
{
    node* head=NULL;
    int pos=5;
    insertAtTail(head,43);
    insertAtTail(head,37);
    insertAtTail(head,98);
    insertAtTail(head,90);
    insertAtTail(head,86);
    insertAtTail(head,56);
    insertAtTail(head,12);
    insertAtTail(head,37);
    insertAtTail(head,47);
    display(head);
    makeCycle(head,pos);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    return 0;
}
