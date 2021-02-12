#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    k=0;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        while (k!=(n-i))
        {
            cout<<" ";
            k++;
        }

        for(j=1;j<=((2*i)-1);j++)
        {
            if((j==i) || (j==((2*i)-1)))
            {
                cout<<i;
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}
