#include<stdio.h>
int middleOfThree(int a, int b, int c) 
{ 
    // Checking for b 
    if ((a < b && b < c) || (c < b && b < a)) 
       return b; 
  
    // Checking for a 
    else if ((b < a && a < c) || (c < a && a < b)) 
       return a; 
  
    else
       return c; 
} 
  
int main() 
{ 
	int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    printf("the median of the three numbers is: %d",middleOfThree(x,y,z));
    return 0;
} 
