// Task 2
#include<stdio.h>
int main()
{
    long long int n,d,sum=0,d1;

    printf("Enter an integer number: ");
    scanf("%lld",&n);

    d1 = n%10;
    while (n>10)
    {
        n = n/10;

    }
    sum = sum + n;
    printf("%d",sum = sum *d1);
    return 0;
}
