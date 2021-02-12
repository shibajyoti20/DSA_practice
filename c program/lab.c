#include <math.h> 
#include <stdio.h> 
   
void primeFactors(int n) 
{ 
	int i;
    while (n % 2 == 0) { 
        printf("%d\n", 2); 
        n = n / 2; 
    } 
  

    for (i = 3; i <= n; i = i + 2) { 
        // While i divides n, print i and divide n 
        while (n % i == 0) { 
            printf("%d\n", i); 
            n = n / i; 
        } 
    } 
  
    // This condition is to handle the case when n 
    // is a prime number greater than 2 
    if (n > 2) 
        printf("%d ", n); 
    
} 
  
int main() 
{ 
    int n;
	printf("Enter a number: ");
	scanf("%d",&n); 
    primeFactors(n); 
    return 0; 
} 

