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

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val)
{
    node* n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void todeleteHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        todeleteHead(head);
        return ;
    }

    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reverseIteration(node* &head)
{
    node* prevptr=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prevptr;

        prevptr=curr;
        curr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

node* reverseKnodes(node* head, int k)
{
   node* prevptr=NULL;
   node* curr=head;
   node* nextptr;
   int count=0;

   while(curr!=NULL && count<k)
   {
       nextptr = curr->next;
       curr->next=prevptr;
       prevptr=curr;
       curr=nextptr;
       count++;
   }
   if(nextptr!=NULL)
   {
       head->next=reverseKnodes(nextptr,k);
   }
   return prevptr;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,23);
    insertAtTail(head,78);
    insertAtTail(head,98);
    display(head);
    insertAtHead(head,200);
    display(head);
    cout<<search(head,66)<<endl;
    cout<<search(head,23)<<endl;
    deletion(head,78);
    display(head);
    todeleteHead(head);
    display(head);
    insertAtTail(head,76);
    insertAtTail(head,38);
    display(head);
    
    int k=2;
    node* newhead1=reverseKnodes(head,k);
    cout<<"Reversing k nodes "<<endl;
    display(newhead1);

	/*cout<<"Revese recursive"<<endl;    
    node* newhead=reverseRecursive(head);
    display(newhead);*/

    return 0;
}
