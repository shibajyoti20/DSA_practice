#include<iostream>
using namespace std;
int main()
{
	int i,j,row,sp;
	cout<<"Enter the number of rows: ";
	cin>>row;
	
	for(i=1,j=0;i<=row;i++,j=0)
	{
		for(sp=1;sp<=(row-i);sp++)
		{
			cout<<" ";
		}
		while(j!=(2*i)-1)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
	}
    
	for(i=(row-1),j=0;i>=1;i--,j=0)
	{
		for(sp=1;sp<=(row-i);sp++)
		{
			cout<<" ";
		}
		while(j!=(2*i)-1)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
	}
    
}
