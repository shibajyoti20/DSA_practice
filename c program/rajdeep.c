#include<stdio.h>
int main()
{
	int a,i;
	printf("enter a number: ");
	scanf("%d",&a);
	for (i=2;a>1;i++)
	{
		while(a%i==0)
		{
			printf("%d",i);
			a = a/i;
		}
	}
	return 0;
}
