#include<iostream>
using namespace std;

int main(){
	int i,j,rows;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)
		{
			if(i==rows || j==1 || j==rows)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
