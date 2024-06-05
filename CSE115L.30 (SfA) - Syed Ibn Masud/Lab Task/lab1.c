#include<stdio.h>

int main()
{
    int arr[10000],arr1[10000],j,i,n,c=0 ;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");




i=0;
    while(i<n)
    {

        scanf("%d",&arr[i]);
        i++;
    }




i=0;

  while(i<n)
    {
        c=1;
        if(arr[i]!=9999999)

		{
		    j=i+1;
		    while( j<n)

            {
        	   if(arr[i]==arr[j])

        	    {
			       c++;
			       arr[j]=9999999;
		       }
		       j++;

	       }
	       arr1[i]=c;
		}

i++;
}
printf("\n");

i=0;


 while(i<n)
    {
         if(arr[i]!=9999999)
        {
        	printf("Frequency of %d is: %d \n",arr[i],arr1[i]);

		}
		i++;

    }


return 0;
}
