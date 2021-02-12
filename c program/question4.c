#include<stdio.h>
int decTOoct(int n)
{
	int j;
	int octnum [1000];
	
	int i = 0;
	while(n != 0)
	{
		octnum[i]=n%8;
		n = n/8;
		i++;
	}
	for(j = i-1;j>=0;j--)
	{
		printf("%d",octnum[j]);
	}
}
int octTOdec(int m)
{
	int decimal_val = 0;	
	int base = 1;
	while (m)
	{
		int last_digit = m%10;
		m = m/10;
		
		decimal_val += last_digit*base;
		base = base*8;
	}
	printf("%d",decimal_val);
}
int main()
{
	int p;
	printf("Enter the decimal number: ");
	scanf("%d",&p);
	printf("The octal value of n is:\n");
	decTOoct(p);
	
	int q;
	printf("\nEnter the octal number: ");
	scanf("%d",&q);
	printf("The decimal value of m is:\n");
	octTOdec(q);
	return 0;
}
