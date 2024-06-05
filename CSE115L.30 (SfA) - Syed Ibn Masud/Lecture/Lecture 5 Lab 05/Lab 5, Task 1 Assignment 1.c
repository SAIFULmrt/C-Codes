#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,a,b,c,d,n,sum=0;

    printf ("Enter a 4-digit number: ");
    scanf ("%d",&n);

    n1 = n/1000;
    n2 = (n%1000)/100;
    n3 = (n%100)/10;
    n4 = n%10;

    a = n1%2;
    b = n2%2;
    c = n3%2;
    d = n4%2;

    if (a==0)
    {
        sum =  sum + n1;
    }

    if (b==0)
    {
        sum = sum + n2;
    }

    if (c==0)
    {
        sum = sum + n3;
    }

    if (d==0)
    {
        sum = sum + n4;
    }

    if (sum <0)
    {
        printf("%d",sum * (-1));
    }
    else
    {
        printf("%d",sum);
    }



    return 0;
}
