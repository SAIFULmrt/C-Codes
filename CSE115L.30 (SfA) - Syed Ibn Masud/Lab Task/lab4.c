//4
#include <stdio.h>

int main()

{
    int n,i;
    float n1=7.0,d1=16.0,n2 =3.0;
    float sum=0.0,sum1=0.0,sum2=0.0,d2=8.0;

    printf("Enter nth term:\n");
    scanf("%d",&n);
    printf("\n");

    for(i =1; i<= n; i++)

    {

        if(i%2!=0)
        {

            sum+=(n1/d1);

            n1-=2;
        }
        else
        {
            sum+=((float)(n2)/d2);
            n2-=2;
            d2/=2;
        }

    }

    printf("Sum of the series up to %dth term is: %.4f",n,sum);
    printf("\n");
    return 0;
}
