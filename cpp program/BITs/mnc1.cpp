//Program to find a unique number in an array which occurs only once while others
//appear twice.

#include<iostream>
using namespace std;
int xorsum(int array[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^array[i];
    }
    return xorsum;
}

int main()
{
    int arr[13]={1,2,3,7,1,2,3,4,5,6,5,6,4};
    cout<<xorsum(arr,13)<<endl;
    return 0;
}
