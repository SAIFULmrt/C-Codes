#include <stdio.h>
#include<string.h>
#include <stdlib.h>
struct info
{
    char name[20];
    int roll;
    int marks_eng;
    int marks_ben;
    int marks_math;

};

int main()
{
    int n=10;
    struct info st[n];
    int total=0;
    int store[9];

    for(int i=0; i<n; i++)
    {
        printf("Student no:%d\n",i+1);
        printf("\n");
        printf("Enter name: \n");
        scanf("%s",&st[i].name);
        printf("Enter roll no:\n");
        scanf("%d",&st[i].roll);
        printf("English marks: \n");
        scanf("%d",&st[i].marks_eng);
        printf("Bengali marks: \n");
        scanf("%d",&st[i].marks_ben);
        printf("Maths marks: \n");
        scanf("%d",&st[i].marks_math);

        total=st[i].marks_eng+st[i].marks_ben+st[i].marks_math;
        store[i]=total;

        printf("\n");

    }

    int flag=0;
    int max=store[0];
    for(int i= 0; i<n; i++)
    {
        if(store[i]>max)
        {
            max=store[i];
            flag=i;

        }
    }
    printf("Best Student: \n");
    printf("Name: %s\n",st[flag].name);
    printf("Roll: %d\n",st[flag].roll);
    printf("Total marks: %d\n",max);

    return 0;
}
