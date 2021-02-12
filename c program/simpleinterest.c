#include<stdio.h>
int main()
{
	int princ, rate, time, interest;
	princ = 60000;
	rate = 4;
	time = 6;
	interest = (princ*rate*time)/100;
	printf ("the interest given is: %d",interest);
	return (0);
}

