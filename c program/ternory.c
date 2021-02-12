#include <stdio.h>
int main ()
{
	int x;
	
	printf ("enter any interger: ");
	scanf ("%d", &x);
	
	x%5==0 && x%7==0 ? printf (" divisible by both 5 and 7") : printf ("not divisible by both 5 and 7");
	return 0;
}
