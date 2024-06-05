#include<stdio.h>
#define size 5000

int main()
{
    int arr[size],arr1[size],n,i,j,k=0 ;

    n = 9;

    printf("Enter input: \n");

    i=0;
    while(i<n)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
        i++;
    }


    i=0;

    while(i<n)
    {
        k=1;
        if(arr[i]!=9999999)

        {
            j=i+1;
            while( j<n)

            {
                if(arr[i]==arr[j])

                {
                    k++;
                    arr[j]=9999999;
                }
                j++;

            }
            arr1[i]=k;
        }

        i++;
    }

    printf("\n");

    i=0;

    while(i<n)
    {
        if(arr[i]!=9999999)
        {
            printf("Frequency of %d: %d \n",arr[i],arr1[i]);

        }
        i++;

    }

    return 0;
}
