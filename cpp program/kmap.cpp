#include<iostream>
#include<stdio.h>
#include<strings.h>
#include<conio.h>
using namespace std;

int main()
{
    int squ8[8];
    int b;
    char var_name[4];
    
    cout<<"3-VARIABLE K-MAP\n";
    strcpy(var_name,"ABC");


    for(b=0;b<8;b++)
    {
        printf("\nEnter 1 or 0 into the square %d: ",b);
        cin>>squ8[b];

        while(squ8[b]!=0 && squ8[b]!=1)
        {
            cout<<"Value entered is neither one nor zero\n";
            printf("Please enter between 0 and 1 only in square %d: ",b);
            cin>>squ8[b];
        }
    }

    printf("The K-Map is: \n\n\t\t     %c'%c\n\t\t%c'%c' %d %d\n\t\t%c'%c  %d %d \n\t\t%c %c  %d %d\n\t\t%c %c' %d %d \n\n",var_name[2],var_name[2],var_name[0],var_name[1],squ8[0],squ8[1],var_name[0],var_name[1],squ8[2],squ8[3],var_name[0],var_name[1],squ8[6],squ8[7],var_name[0],var_name[1],squ8[4],squ8[5]);
	
	if(squ8[0]==0 && squ8[1]==0 && squ8[2]==0 && squ8[3]==0 && squ8[4]==0 && squ8[5]==0 && squ8[6]==0 && squ8[7]==0)
	{
		cout<<"There is no function from the K-Map";
		getch();
	}
	
	cout<<"The boolean function is: ";
	
	if (squ8[0]==1)
	{
		printf("%c'%c'%c'",var_name[0],var_name[1],var_name[2]);
		if (squ8[1]==1 || squ8[2]==1 || squ8[3]==1 || squ8[4]==1 || squ8[5]==1 || squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if(squ8[1]==1)
	{
		printf("%c'%c'%c",var_name[0],var_name[1],var_name[2]);
		if(squ8[2]==1 || squ8[3]==1 || squ8[4]==1 || squ8[5]==1 || squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if (squ8[2]==1)
	{
		printf("%c'%c%c'",var_name[0],var_name[1],var_name[2]);
		if (squ8[3]==1 || squ8[4]==1 || squ8[5]==1 || squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if(squ8[3]==1)
	{
		printf("%c'%c%c",var_name[0],var_name[1],var_name[2]);
		if(squ8[4]==1 || squ8[5]==1 || squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if(squ8[4]==1)
	{
		printf("%c%c'%c'",var_name[0],var_name[1],var_name[2]);
		if (squ8[5]==1 || squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if(squ8[5]==1)
	{
		printf("%c%c'%c'",var_name[0],var_name[1],var_name[2]);
		if (squ8[6]==1 || squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if(squ8[6]==1)
	{
		printf("%c%c%c'",var_name[0],var_name[1],var_name[2]);
		if (squ8[7]==1)
		{
			printf(" + ");
		}
	}
	
	if (squ8[7]==1)
	{
		printf("%c%c%c",var_name[0],var_name[1],var_name[2]);
	}
	cout<<"\n\n\n";
	
getch();
}
