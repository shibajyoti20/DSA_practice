#include<stdio.h>

struct employee{
	char name[50];
	int salary;
};

int main()
{
	struct employee e;
	e = struct employee getinfo();
	printf("Displaying information");
	printf("\nName:%s",e.name);
	printf("\nSalary:%d",e.salary);
	return 0;
}

struct employee getinfo()
{
	struct employee e1;
	printf("Enter name: ");
	scanf("%s",&e1.name);
	printf("Enter salary: ");
	scanf("%d",&e1.salary);
	return e1;
}
