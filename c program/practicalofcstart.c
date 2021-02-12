# include <stdio.h>
int main ()
{
	unsigned int a = 60; /* 60 = 00111100 */
	int  c = 0;
	c = a << 2; /* 240= 11110000 */
	printf ("Line 1 - value of c is %d\n",c);
    
}
