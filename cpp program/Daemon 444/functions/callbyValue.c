#include<stdio.h>


void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d and y=%d\n",x,y);
}

int main(){
    int a=90,b=100;
    swap(a,b);
    printf("Values of a and b respectively: ");
    printf("%d %d\n",a,b);
    return 0;
}
