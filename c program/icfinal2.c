#include <stdio.h>
int factSum=0;
int factorial(int param){
    int n, i;
    n=param;
    unsigned long long fact = 1;
    if (n < 0)
        printf("Negative number doesn't have a factorial");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        factSum+=fact;
    }
}
int main()
{
    int n, r, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        r = n % 10;
        factorial(r);
        n /= 10;
    }

    if (original == factSum)
        printf("%d is a strong number", original);
    else
        printf("%d is not a strong number", original);

    return 0;
}
