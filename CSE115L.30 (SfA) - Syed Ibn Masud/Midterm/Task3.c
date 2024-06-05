#include<stdio.h>
int main()
{
    int minutes,hours;
    printf("Input minutes: ");
    scanf("%d",&minutes);

     hours = minutes/60;
     minutes = minutes - hours *60;
    printf("%d Hours, %d Minutes",hours,minutes);

    return 0;
}
