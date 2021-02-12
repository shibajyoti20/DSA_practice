#include<stdio.h>
int main()
{
	int n,i,sum;	
	while (1>0)
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		sum = 0;
		for (i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
		
		if(sum == n && n != 1)
		{
			printf("The number is a perfect number\n");
		}
		else
		{
			printf("The number is imperfect\n");
		}
	}
}
