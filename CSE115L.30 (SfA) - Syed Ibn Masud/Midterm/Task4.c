// Task 4
#include<stdio.h>
int main ()
{
    double a,b,c,min=0.0;

    printf("Enter three double numbers: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    min = a;

    switch(a<=b && a<=c)
    {
    case 1:
        printf("a is minimum %lf",a);
    case 0:
        switch(b<=c && b<=a)
        {
        case 1:
            printf("b is minimum %lf",b);
        case 0:
            switch(c<=a && c<=b)
            {
            case 1:
                printf("c is minimum %lf",c);
            }
        }
    }
    return 0;
}

