//1(b)
#include<stdio.h>
float Find_Maximum(int);

int main()
{
    int n=21;
    float result;

    result = Find_Maximum(n);

    printf("\nThe maximum number between the %d different numbers is: %.2f\n", n, result);
    return 0;
}

float Find_Maximum(int n)
{
    int i;
    float a,max;

    printf("Enter %d different numbers :\n", n);
    printf("\nNumber 1: ");
    scanf("%f", &max);

    for(i = 2; i <= n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%f", &a);

        if(max < a)
            max = a;
    }
    return max;
}
