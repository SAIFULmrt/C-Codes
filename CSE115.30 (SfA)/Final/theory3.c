//3
#include<stdio.h>
int main()
{

    int n,i,j,sum=1,sum1=1;

    printf("Enter n: ");
    scanf("%d",&n);

    int matrix[n][n];

    printf("Enter values for your %dx%d matrix\n",n,n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        sum = sum * matrix[i][i];
        for(j=0; j<n; j++)
        {
            if(i+j == ((n+1)-2))
            {
                sum1 *= matrix[i][j];
            }
        }
    }

    printf("the products are: %d and %d\n",sum,sum1);

    return 0;
}
