#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct struct_coordinates
{
    int x;
    int y;

}point;

int main()
{
    int n,i,j,a,b,c,d;

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

    double distance,pow_x,pow_y;
    double store[100][100];
    double max=store[0][0];

    for(i=0; i<n; i++)
    {


        for(j=0; j<n; j++)
        {
            int x2=points[j].x;
            int x1=points[i].x;
            int y2=points[j].y;
            int y1=points[i].y;

            pow_x=pow(x2-x1,2);
            pow_y=pow(y2-y1,2);

            distance=sqrt(pow_x+pow_y);
            store[i][j]=distance;
        }
    }

    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {

            if(store[i][j]>max)
            {
                max=store[i][j];

                break;
            }
        }
    }


    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n; j++)
        {
            int x2=points[j].x;
            int x1=points[i].x;
            int y2=points[j].y;
            int y1=points[i].y;

            pow_x=pow(x2-x1,2);
            pow_y=pow(y2-y1,2);

            distance=sqrt(pow_x+pow_y);
            store[i][j]=distance;

            if(max!=store[i][j])
            {
                continue;
            }
            else
            {
                a = x2;
                b = y2;
                c = x1;
                d = y1;
                break;
            }
        }
    }

    printf("Coordinate of the points of the pair that is the farthest apart are:\n\nPoint A: (%d,%d)\nPoint B: (%d,%d)\n",a,b,c,d);


    return 0;
}
