//1(a)
#include<stdio.h>
int Find_Maximum(int);

int main()
{
    int n=3;
    int result;

    result = Find_Maximum(n);

    printf("\nThe maximum number between the %d integer numbers is: %d \n", n, result);
    return 0;
}

int Find_Maximum(int n)
{
    int i;
    int a,max;

    printf("Enter %d integer numbers :\n", n);
    printf("\nNumber 1: ");
    scanf("%d", &max);

    for(i = 2; i <= n; i++)
    {
        printf("\nNumber %d: ", i);
        scanf("%d", &a);

        if(max < a)
            max = a;
    }
    return max;
}
