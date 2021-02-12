#include<stdio.h>
#include<stdbool.h>//for using boolean fuction
bool leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int leap;
	printf("Enter a year: ");
	scanf("%d",&leap);
	leap_year(leap)?printf("It is a leap year"):printf("It is not a leap year");
	return 0;
}
