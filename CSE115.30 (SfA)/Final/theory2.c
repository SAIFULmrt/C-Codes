//////////////////////////////////////////////////////////////////////////2
#include <stdio.h>
int main()
{
    char a[10000], b[10000],c[10000];
    int x=0, y, z = 0;

    printf("Input a string\n");
    fgets(a,sizeof(a),stdin);

    do
    {
        y = z -1;
        z++;
    }
    while (a[z]!='\0');

    do
    {
        b[x]=a[y];
        y--;
        x++;
    }
    while(x<z);

    int i = 0;
    do
    {
        c[2*i] = b[i];
        if (i != z - 1)
            c[2*i + 1] = ' ';
        i++;
    }
    while(i <z);

    printf("%s\n", c);

    return 0;
}
