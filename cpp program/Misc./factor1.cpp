#include <iostream>
using namespace std;

int main()
{
    int n;
    int count=1;

    cout<<"Enter n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        count *= i;
    }
    cout<<count;
    return 0;
}
