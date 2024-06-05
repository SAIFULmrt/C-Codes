#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char text[2000],temp[2000];
    printf("Enter the simple text to encrypt:\n");
    gets(text);
    strcpy(temp,text);
    strrev(temp);
    for(int i=0; i<strlen(temp); i++)
    {
        printf("%d ",temp[i]);

    }

    return 0;
}
