#include<stdio.h>
int main ()
{
    int n1,n2,n3,output;
    printf("Enter three numbers n1,n2 and n3:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if (n1>n2 && n1>n3)
    {
        output = n1;
    }
    else if (n2>n3)
    {
        output = n2;
    }
    else
    {
        output = n3;
    }


    printf("%d",output);

    return 0;


}
