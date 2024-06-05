#include<stdio.h>>
int main()
{
    int i,n;
    float a=0.0,b=0.0,c=0.0,sum=0.0;
    float n1=7.0,d1=16.0,n2 =3.0,d2=8.0;

    a = n1/d1;
    b = n2/d2;
    c = a-b;

    printf("Enter nth term: \n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        sum = sum + a;
        a = a - c;
    }

    printf("\nSum of the series up to %d term is: %.4f\n",n,sum);
    return 0;
}
