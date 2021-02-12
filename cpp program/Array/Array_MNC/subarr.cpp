#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int counter=0;
    for(int i=0;i<n;i++)
    {
        counter=0;
        for(int j=i;j<n;i++)
        {
            counter+=arr[j];
            cout<<counter<<" ";
        }cout<<endl;
    }

    return 0;
}
