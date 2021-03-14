#include<iostream>
#define SIZE 5
using namespace std;
int A[SIZE];
int top =-1;

bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int value)
{
    if(top==SIZE-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        A[top]=value;
    }
}

void pop()
{
    if(isempty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        top --;
    }
}

void displaystack()
{
    if(isempty())
    {
        cout<<"Stack is empty"<<endl;
    }
    for(int i=0;i<=top;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
}

void displaytop()
{
    if(isempty()){
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"Element at the top is "<<A[top]<<endl;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    
    //pop();
    displaystack();
    displaytop();
    
    return 0;
}
