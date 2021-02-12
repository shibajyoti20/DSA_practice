#include<iostream>
using namespace std;

void display();

int main()
{
    display();
    display();
    return 0;
}

void display()
{
    static int count = 0;
    cout<<"This is the "<<++count<<" line."<<endl;
}
