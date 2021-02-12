struct Employee {

char ename[10];

int sal; };

main() {

struct Employee emp[5];

int i, j;

for(i = 0; i < 4; i++) {

	printf("\n Enter Employee %d record:\n", i+1);
	
	printf("\n Employee name:\t");
	
	scanf("%s", emp[i].ename);
	
	printf("\n Enter Salary:\t");
	
	scanf("%d", &emp[i].sal); }

printf("\nDisplaying Employee record:\n");

for(i = 0; i < 4; i++) {

	printf("\n Employee name is %s", emp[i].ename);
	
	printf("\n Salary is %d\n", emp[i].sal);}
}
