#include<stdio.h>
int main ()
{
    int n,output;
    printf("Enter an integer number: ");
    scanf("%d",&n);

    if (n>=0)
    {
        if (n%2==0)
        {
            printf("Positive and even");
        }
        else
        {
            printf("Positive and odd");
        }
    }

    else
    {
        printf("Negative number");
    }

return 0;

}
