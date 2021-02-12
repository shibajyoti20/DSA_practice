#include <iostream>
using namespace std;

int maximum(int arr[], int size)
{
    int max= arr[0];
    for (int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    return max;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int * arr = new int[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum number in the array is:"<<maximum(arr,size)<<endl;
    return 0;
}
