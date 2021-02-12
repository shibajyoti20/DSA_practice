//This is the program to find whether a given word is a pallendrom or not.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check = 0;
            break;
        }
    }

    if(check==1)
    {
        cout<<"The word is a pallindrom"<<endl;
    }
    else
    {
        cout<<"The word is not a pallindrom"<<endl;
    }

    return 0;
}
