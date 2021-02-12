#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter n ";
    cin>>n;

    for(i=2;i*i<n;i++)
    {
        if((n%i)==0)
        {
            cout<<"Not a prime number"<<endl;
            break;
        }
    }

    if((i*i)>=n/2)
    {
        cout<<n<<" is a prime number"<<endl;  
    }
    return 0;
}
