#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the value of n ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        int k = 0;
        while(k!=(n-i))
        {
            cout<<" ";
            k++;
        }
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=1;i<n;i++)
    {
        int k=0;
        while(k!=i)
        {
            cout<<" ";
            k++;
        }
        for(int j=(n-i);j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
