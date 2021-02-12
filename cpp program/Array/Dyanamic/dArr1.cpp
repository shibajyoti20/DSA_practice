#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number of C"<<endl;
    cin>>n>>m;
    int ** Mat = new int* [n];
    for(int i=0;i<n;i++)
    {
        Mat[i]=new int[m];

        for(int j=0;j<m;j++)
        {
            cin>>Mat[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<Mat[i][j]<<",";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        delete[] Mat[i];
    }
    delete[] Mat;

    return 0;
}
