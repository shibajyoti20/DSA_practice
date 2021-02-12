#include <stdio.h>
int main ()
{
	int e, m, s;

	printf ("enter your marks in english: ");
	scanf ("%d", &e);
	printf ("enter your marks in mathematics: ");
	scanf ("%d", &m);
	printf ("enter your marks in science: ");
	scanf ("%d", &s);

	if (e>=30, m>=30, s>=30)
	{
		if (e>=70, m>=70, s>=70)
		printf ("the student is eligible for pure science, bio science, commerce, arts");
		else if (e>=60, m>=60, s>=70)
		printf ("the student is eligible for bio scince, commerce, arts");
		else if (e>=50, m>=60, s>=50)
		printf ("the student is eligible for commerce and arts");
		else
		printf ("the student is eligible for arts only");
	}
	else
	{
		printf ("the student is failed: try next year");
	}
	return 0;
}
