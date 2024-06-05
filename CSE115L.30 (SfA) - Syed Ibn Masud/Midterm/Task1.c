//Task 1
#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x: ");
    scanf("%d",&x);

    y = (x*x*x) + ((2*x*x)/2) -4;

    printf("The value of y is %d",y);
    return 0;
}
