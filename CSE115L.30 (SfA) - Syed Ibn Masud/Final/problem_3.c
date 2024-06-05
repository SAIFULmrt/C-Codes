#include <stdio.h>

float series(int n);

int main()
{
    int n;
    float term;

    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &n);

    term = series(n);

    printf("\n%d th term of the sequence is: %.4f\n", n, term);

    return 0;
}

float series(int n)

{
    float i = 2;
    if(n == 1)

    {

        return .4375;
    }
    if (n == 2)
    {
        return .375;
    }

    else
    {

        float result = series(n-2)-i*.0625;
        return result;
    }
}
