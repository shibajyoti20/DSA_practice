#include <stdio.h>

//FUNCTION TO SORT THE ARRAY IN ASCENDING ORDER
void sort(int n,int number[])
    {
 
        int i, j, a;
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];     //SWAPPING THE NUMBERS IN CASE THEY ARE NOT SORTED.
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
    
//FUNCTION TO CHECK FOR THE PAIRS/PAIR.
bool findPair(int arr[], int size, int n) 
{ 
    // Initialize positions of two elements 
    int i = 0;   
    int j = 1; 
  
    // Search for a pair 
    while (i<size && j<size) 
    { 
        if (i != j && arr[j]-arr[i] == n) 
        { 
            printf("Pair Found: (%d, %d)", arr[i], arr[j]); 
            return true; 
        } 
        else if (arr[j]-arr[i] < n) 
            j++; 
        else
            i++; 
    } 
  
    printf("No such pair"); 
    return false; 
} 
    
//DRIVER FUNCTION
int main()
{
	int N,array[100],diff;
	sort(N,array);
	int size = sizeof(array)/sizeof(array[0]);
	printf("Enter the difference: ");
	scanf("%d",&diff);
	findPair(array,size,diff);
	return 0;
}
