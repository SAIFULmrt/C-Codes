//Task 2
#include <stdio.h>

unsigned long long calculateFact(int);

int main()
{
    int x;
    unsigned long long fact;
    scanf("%d", &x);
    fact = calculateFact(x);
    printf("Factorial of %d! = %llu ",x, fact);

    return 0;
}

unsigned long long calculateFact (int n)
{
    int i;
    unsigned long long fact2=1;
    for (i=1; i<=n; i++)
    {
       fact2 = fact2 * i;


    }
    return fact2;
}
