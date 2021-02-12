#include<iostream>
using namespace std;

int * findsum(int arr[],int value,int size)
{
    int * temp = new int[2];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((arr[i]+arr[j])==value)
            {
                temp[0]=arr[i];
                temp[1]=arr[j];
                return temp;
            }
        }
    }
    return arr;
}


int * bubblesort(int arr[], int arraysize)
{
    int counter=1;
    while(counter<arraysize)
    {
        for(int i=0;i<arraysize-counter;i++)
        {
            if(arr[i+1]<arr[i])
            {
                int temp;
                arr[i]=temp;
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            counter++;
        }
    }
    return arr;
}


int * sumarray(int arr[], int value, int size)
{

    int * newarr = new int[2];
    int * sortedarray = bubblesort(arr,size);
    int *ptr1 = sortedarray;
    int *ptr2 = &sortedarray[size-1];
    while(ptr1!=ptr2)
    {
       if((*ptr1 + *ptr2)==value)
       {
           newarr[0]= *ptr1;
           newarr[1]= *ptr2;
           return newarr;
       } 
       else if ((*ptr1 + *ptr2)>value)
       {
           ptr2--;
       }
       else if ((*ptr1 + *ptr2)<value)
       {
           ptr1++;
       }
       else
       {
           continue;
       }
    }
    return arr;
}

int main()
{
    int size;
    int * arr=new int[size];
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int * desiredarray = sumarray(arr,8,6);
    int newsize = sizeof(&desiredarray)/sizeof(int);
    for(int i=0;i<newsize;i++)
    {
        cout<<desiredarray[i]<<" ";
    }
    
    return 0;
}
