/* Lab 4 Task 1
Write a program that takes 3-digit integer number as input and calculates the summation of the
digits as output.*/

#include<stdio.h>

int main( )
{

    int a,b,c,n, sum;

    printf ("Enter a Three Digit Number:");
    scanf ("%d",&n);

    a=n/100;
    b=( (n%100)/10);
    c=n%10;

    sum=a+b+c;

    printf("Sum of Individual Digits of Given Numbers is %d", sum);

    return 0;
}
