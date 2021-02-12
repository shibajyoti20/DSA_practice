#include <iostream>
#include <string>
using namespace std;
int main()
{
char name[10][25];
cout<<"Enter the Names:"<<endl;
for (int i = 0; i<=4; i++)
{
 cout<<"Name"<<i+1<<": ";
 cin>>name[i]; 
}
for (int j=0;j<=4;j++)
{
 cout<<name[j]<<endl; 
}
return 0;
}


