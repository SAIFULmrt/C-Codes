//Task 1
#include <stdio.h>

double calculateSeries(int);

int main()
{
    int n;
    double sum;
    scanf("%d", &n);
    sum = calculateSeries(n);
    printf("Sum of the series = %lf ", sum);

    return 0;
}

double calculateSeries(int n)
{
    int i;
    double sum2 = 0.0, term;
    for (i=1; i<=n; i++)
    {
        term = 1.0/(i*i);
        if(i%2==0)
        {
            sum2 = sum2 - term;
        }
        if (i%2!=0)
        {
            sum2 = sum2 + term;
        }
    }
    return sum2;
}
