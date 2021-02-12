#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,p[3],sum=0,i,*smallest;
	float avg;
	for(i=0;i<3;i++)
	{
		printf("\nENTER NUMBER %d: ",i+1);
		scanf("%d",&p[i]);
	}
	smallest=&p[0];
	int smallestIndex;
	for(i=1;i<3;i++){
	    if(p[i]<*smallest){
	        smallest=&p[i];
	        smallestIndex=i;
	    }
	}
	for(i=0;i<3;i++){
	    if(p[i]==*smallest){
	        continue;
	    }
	    else{
	        sum+=p[i];
	    }
	}
	avg=(float)sum/2;
	printf("The Average of best two is: %f",avg);
	

    return 0;
}
