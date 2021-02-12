#include<iostream>
using namespace std;


void rearrange(int** arr, int size)
{
    int * newarr = new int[size];
    int right=size-1;
    int left=0;

    for(int i=0;i<size;i++)
    {
        if(0==i%2)
        {
            newarr[i]=*(*(arr)+ right--);
        }
        else
        {
            newarr[i]=*(*(arr) + left++);
        }
    }
    *arr=newarr;
}
int main()
{
    int n;
    cout<<"Enter array length: "<<endl;
    cin>>n;
    int * arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rearrange(&arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
