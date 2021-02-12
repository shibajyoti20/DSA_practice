//Program to find the two unique number in an array where all other numbers appear twice.

#include<iostream>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

void unique(int arr[], int n)
{
   int xorsum = 0;
   for(int i=0;i<n;i++)
   {
       xorsum=xorsum^arr[i];
   } 

   int temp = xorsum;
   int setbit = 0;
   int pos=0;
   while(setbit!=1)
   {
       setbit = xorsum & 1;
       pos++;
       xorsum=xorsum >> 1;
   }

   int newxor=0;
   for(int i=0;i<n;i++)
   {
       if(setBit(arr[i],pos-1))
       {
           newxor=newxor^arr[i];
       }
   }

   int otherxor = newxor^temp;
   cout<<newxor<<endl;
   cout<<otherxor<<endl;
}

int main()
{
    int array[]={1,2,4,4,2,1,8,90};
    unique(array,8);
    return 0;
}

