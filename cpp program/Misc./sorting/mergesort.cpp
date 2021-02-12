#include<iostream>
using namespace std;

int * mergearrays(int arr1[], int arr2[], int arr1size, int arr2size)
{
    int size = arr1size + arr2size;
    int ptr1 = 0; 
    int ptr2 = 0;
    int * arr3 = new int[size];
    int i=0;

    while(ptr1<arr1size && ptr2<arr2size)
    {
        if(arr1[ptr1]<arr2[ptr2])
        {
            arr3[i]=arr1[ptr1];
            ptr1++;
        }
        else
        {
            arr3[i]=arr2[ptr2];
            ptr2++;
        }
        i++;
    }

    while(ptr1<arr1size)
    {
        arr3[i]=arr1[ptr1];
        ptr1++;
        i++;
    }

    while(ptr2<arr2size)
    {
        arr3[i]=arr2[ptr2];
        ptr2++;
        i++;
    }

    for(int i=0; i<size;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return arr3;

}

int main()
{
    int arr1size,arr2size;
    cin>>arr1size;
    int * arr1 = new int[arr1size];
    for(int i=0;i<arr1size;i++)
    {
        cin>>arr1[i];
    }

    cin>>arr2size;
    int * arr2 = new int[arr2size];
    for(int i=0;i<arr2size;i++)
    {
        cin>>arr2[i];
    }
    
    mergearrays(arr1,arr2,arr1size,arr2size);    
    return 0;
}
