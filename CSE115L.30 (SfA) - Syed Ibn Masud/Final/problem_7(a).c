#include <stdio.h>

typedef struct struct_coordinates
{
    int x;
    int y;

}point;

int main()
{
    int n;

    printf("How many points you want to input?\n");
    scanf("%d",&n);

    point points[n];

    for(int i=0; i<n; i++)
    {
        printf("enter x%d :",i+1);
        scanf("%d",&points[i].x);
        printf("enter y%d :",i+1);
        scanf("%d",&points[i].y);
        printf("\n");
    }


    return 0;
}
