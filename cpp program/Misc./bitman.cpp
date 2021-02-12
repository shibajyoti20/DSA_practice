#include<iostream>
using namespace std;

//Get Bit function
int getbit(int n, int pos)
{
    return (n & (1<<pos)!=0);
}

//Set Bit function
int setbit(int n,int pos)
{
    return (n | (2<<pos));
}

//Clear Bit function
int clearbit(int n,int pos)
{
    int mask = ~(1<<pos);
    return n & mask;
}

// Update Bit function
int updatebit(int n,int pos, int val)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}

int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,2)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,2,0)<<endl;
    return 0;
}
