#include<iostream>
using namespace std;

int main(){
	int i,j,col;
	cout<<"Enter the number of columns: ";
	cin>>col;
	for(i=1;i<=col;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=(col-1);i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
