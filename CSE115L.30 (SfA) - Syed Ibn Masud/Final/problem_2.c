#include<stdio.h>
int main()
{

    int n,i,j,k;
    char arr[1000][1000];

    printf("Enter n: ");
    scanf("%d",&n);
    printf("\n");


    for (i = n; i > 0; i--)
    {

        for (j = 1; j <= n - i; j++)
        {
            arr[i][j]=' ';
            printf("%c", arr[i][j]);
        }

        for (k = 1; k<= 2 * i- 1; k++)
        {
            arr[j][k]='*';
            printf("%c", arr[j][k]);
        }
        printf("\n");
    }


    return 0;
}
