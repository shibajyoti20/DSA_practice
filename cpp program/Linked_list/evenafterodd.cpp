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


void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
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

void rearrange1(node* &head)
{
    node* odd=head;
    node* even=head->next;

    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd = odd->next;
        even->next=odd->next;
        even = even->next;
    }
    odd->next=evenstart;
    if(odd->next == NULL)
    {
        even->next=NULL;
    }
}

void rearrange2(node* &head)
{
    node* odd=head;
    node* even=head->next;

    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd = odd->next;
        even->next=odd->next;
        even = even->next;
    }
    even->next=head;
    head=evenstart;
    if(even->next == NULL)
    {
        odd->next=NULL;
    }
}


int main()
{
    node* head=NULL;
    insertAtTail(head,90);
    insertAtTail(head,80);
    insertAtTail(head,70);
    insertAtTail(head,60);
    insertAtTail(head,50);
    insertAtTail(head,40);
    insertAtTail(head,30);
    insertAtTail(head,20);
    display(head);
    
    rearrange1(head);
    display(head); 
    
    //rearrange2(head);
    //display(head);
    return 0;
}
