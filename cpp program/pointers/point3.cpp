#include<iostream>
using namespace std;

int main()
{
   /* int n;
    cin>>n;

    int *ptr;
    ptr=&n;
    cout<<ptr<<endl;

    
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;
        //arr++;//incorrect;
    }*/


    //pointers to pointers
    const char* x="man";
    int a=20;
    const char* *w;
    int *p;
    int **q;
    w=&x;
    p=&a;
    q=&p;
    cout<<*w<<endl;
    cout<<w<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}
