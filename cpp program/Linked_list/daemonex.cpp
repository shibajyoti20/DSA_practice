#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        node(int val)
        {
            data= val;
            next=NULL;
        }
};

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
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

void removedups(node* &head)
{
    node* ptr1; 
    node* ptr2;
    node* dups;
    ptr1=head;

    while(ptr1 != NULL && ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->data == ptr2->next->data)
            {
                dups=ptr2->next;
                ptr2->next=ptr2->next->next;
                delete dups;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
}

int main()
{
    node* head=NULL;
    insertAtTail(head,8);
    insertAtTail(head,99);
    insertAtTail(head,8);
    insertAtTail(head,90);
    insertAtTail(head,90);
    insertAtTail(head,11);
    insertAtTail(head,23);
    display(head);
    removedups(head);
    display(head);
    return 0;
}



