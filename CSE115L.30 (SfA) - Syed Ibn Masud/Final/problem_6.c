#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char input[100];
    printf("Enter number as string to returns is as an integer: ");
    gets(input);

    int output = convert(input);
    printf("\n%d\n",output);


    return 0;
}

int convert(input)
{
    int i = atoi(input);
    return i;

}
