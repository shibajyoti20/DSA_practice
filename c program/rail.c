#include <stdio.h>
int main ()
{
	int wh;
	double r,rem;
	printf ("enter your wourk hour: ");
	scanf ("%d", &wh);
	printf ("enter valur of r: ");
	scanf ("%d", &r);
	
	if (wh>=60)
		rem = 40*r + 20*r*1.5 + (wh-60)*r*2.5;
	else if (wh>=40)
		rem = 40*r + (wh - 40)*r*1.5;
	else 
		rem = wh*r;
		
	printf ("your remuneration is: %d", rem);
	return 0;
}
