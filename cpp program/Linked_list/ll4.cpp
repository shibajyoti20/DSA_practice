//This program shows how to merge 2 sorted linked list using both 
//iterative and recursive method.

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
    node* n= new node(val);
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


node* merged_list_iterative(node* &head1, node* &head2)
{
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy=new node(-1);
    node* ptr3=dummy;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;

        }
    
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
     }
    return dummy->next;
}


node* merged_list_recursive(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    if(head1->data < head2->data)
    {
        result=head1;
        result->next=merged_list_iterative(head1->next, head2);
    }
    else
    {
        result=head2;
        result->next=merged_list_iterative(head1, head2->next);
    }   
    return result;
}


int main()
{
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,2,5,9};
    int arr2[]={3,4,8};

    for(int i=0;i<4;i++)
    {
        insertAtTail(head1, arr1[i]);
    }
    for(int i=0;i<3;i++)
    {
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead2=merged_list_recursive(head1,head2);
    display(newhead2);
    //node* newhead1 = merged_list_iterative(head1,head2);
    //display(newhead1);
    return 0;
}
