//This program shows the merging of 2 linked list and finding the merging point value.

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
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}


void intersect(node* &head1, node* &head2, int pos)
{
    if(length(head1)>length(head2))
    {
        node* temp1=head1;
        while(pos--)
        {
            temp1=temp1->next;
        }
        node* temp2=head2;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }

        temp2->next=temp1;

    }

    else{
        node* temp1=head2;
        while(pos--)
        {
            temp1=temp1->next;
        }
        node* temp2=head1;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp1;
    }
}


int find_intersection(node* &head1,node* &head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        ptr1=head2;
        ptr2=head1;
    }
    
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

int main()
{
    node* head1=NULL;
    insertAtTail(head1,76);
    insertAtTail(head1,98);
    insertAtTail(head1,34);
    insertAtTail(head1,29);
    insertAtTail(head1,34);
    insertAtTail(head1,54);
    insertAtTail(head1,99);
    insertAtTail(head1,21);
    insertAtTail(head1,24);

    node* head2=NULL;
    insertAtTail(head2,12);
    insertAtTail(head2,110);
    insertAtTail(head2,82);
    insertAtTail(head2,90);
    insertAtTail(head2,100);
    insertAtTail(head2,200);
    insertAtTail(head2,250);
    intersect(head1,head2,5);
    display(head1);
    display(head2);
    cout<<find_intersection(head1,head2)<<endl;
    return 0;
}
