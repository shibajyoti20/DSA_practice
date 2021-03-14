#include<iostream>
using namespace std;

void swap(int& x,int& y){
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int x=50,y=60;

    swap(x,y);
    cout<<"value of x: "<<x<<endl;
    cout<<"value of y: "<<y<<endl;
    return 0;
}
