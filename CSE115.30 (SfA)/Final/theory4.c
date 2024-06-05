#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char text[2000],temp[2000];
    printf("Enter text: \n");
    gets(text);
    strcpy(temp,text);
    int count_an=0,count_a=0,count_the=0, space = 0;

    for(int i=0; i<strlen(temp); i++)
    {
        if((temp[i-1]=='\0'&& temp[i]=='a'&&temp[i+1]=='n' && temp[i+2]=='\0') || (temp[i-1]=='\0'&& temp[i]=='a'&&temp[i+1]=='n' && temp[i+2]==' ') || (temp[i-1]==' '&& temp[i]=='a'&&temp[i+1]=='n' && temp[i+2]==' ') || (temp[i-1]==' '&& temp[i]=='a'&&temp[i+1]=='n' && temp[i+2]=='\0'))
        {
            count_an++;

        }

    }
    for(int i=0; i<strlen(temp); i++)
    {
        if((temp[i-1]=='\0' && temp[i]=='t'&& temp[i+1]=='h' && temp[i+2]=='e' && temp[i+3]=='\0') || (temp[i-1]=='\0' && temp[i]=='t'&& temp[i+1]=='h' && temp[i+2]=='e' && temp[i+3]==' ') || (temp[i-1]==' ' && temp[i]=='t'&& temp[i+1]=='h' && temp[i+2]=='e' && temp[i+3]==' ') || (temp[i-1]==' ' && temp[i]=='t'&& temp[i+1]=='h' && temp[i+2]=='e' && temp[i+3]=='\0'))
        {
            count_the++;

        }

    }
    for(int i=0; i<strlen(temp); i++)
    {
        if((temp[i-1]=='\0' && temp[i]=='a'&& temp[i+1]=='\0')|| (temp[i-1]=='\0' && temp[i]=='a'&& temp[i+1]==' ') ||( temp[i-1]==' '&&temp[i]=='a' &&temp[i+1]=='\0') || (temp[i-1]==' ' && temp[i]=='a' && temp[i+1]==' '))
        {
            count_a++;

        }

    }
    printf("\nFrequency of \"a\" -> %d time(s)\n",count_a);
    printf("Frequency of \"an\" -> %d time(s)\n",count_an);
    printf("Frequency of \"the\" -> %d time(s)\n",count_the);

    return 0;
}
