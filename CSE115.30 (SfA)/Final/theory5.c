//5
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct business_class
{
    char name[30];
    char email[50];
    char number[20];
};

struct economy_class
{
    char name[30];
    char email[50];
    char number[20];
};

int main ()
{
    struct business_class bus_seat[3];
    struct economy_class eco_seat[5];

    int x,n=0,n1=0;

    printf ("Welcome!\n1.Business class seat\n2.Economy class seat\n");
    scanf ("%d", &x);

    system ("cls");

    switch (x)

    {
    case 1:
        printf("\nBusiness Class Seat\n");

        {

            int flag = 1;
            int i = 0;

            while (flag==1)

            {

                printf("Passenger %d: \n",i+1);
                printf ("Enter name:");
                scanf ("%s", &bus_seat[i].name);
                printf ("Enter e-mail:");
                scanf ("%s", &bus_seat[i].email);
                printf ("Enter Phone Number:");
                scanf ("%s", &bus_seat[i].number);

                system ("cls");

                i++;
                n++;

                printf ("Continue?\n1.yes\n2.No\n");

                int flag_2;

                scanf ("%d", &flag_2);

                if (flag_2 == 1)
                {

                    if (i == 3)
                    {

                        printf("Seat is full! want economy class seat?\n1.yes\n2.No\n");

                        int j;

                        scanf ("%d", &j);

                        if (j == 1)

                        {

                            printf("\nEconomy Class Seat\n");
                            {

                                int flag = 1;

                                int i = 0;

                                while (flag==1)

                                {

                                    printf("Passenger %d: \n",i+1);
                                    printf ("Enter name:");
                                    scanf ("%s", &eco_seat[i].name);
                                    printf ("Enter e-mail:");
                                    scanf ("%s", &eco_seat[i].email);
                                    printf ("Enter Phone Number:");
                                    scanf ("%s", &eco_seat[i].number);

                                    system ("cls");

                                    i++;
                                    n1++;

                                    printf ("Continue?\n1.yes\n2.No\n");

                                    int flag_2;

                                    scanf ("%d", &flag_2);

                                    if (flag_2 == 1)
                                    {

                                        if (i == 5)
                                        {

                                            printf ("Seat is full!\nThank you");
                                            break;

                                        }

                                        continue;

                                    }

                                    else
                                    {
                                        printf ("Thank you!\n");

                                        flag = 2;

                                    }

                                }


                                break;
                            }

                        }

                        else
                        {
                            flag==2;

                            break;

                        }

                    }

                    continue;

                }

                else
                {

                    printf("\nEconomy Class Seat\n");
                    {

                        int flag = 1;

                        int i = 0;

                        while (flag==1)

                        {

                            printf("Passenger %d: \n",i+1);
                            printf ("Enter name:");
                            scanf ("%s", &eco_seat[i].name);
                            printf ("Enter e-mail:");
                            scanf ("%s", &eco_seat[i].email);
                            printf ("Enter Phone Number:");
                            scanf ("%s", &eco_seat[i].number);

                            system ("cls");

                            i++;
                            n1++;

                            printf ("Continue?\n1.yes\n2.No\n");

                            int flag_2;

                            scanf ("%d", &flag_2);

                            if (flag_2 == 1)
                            {

                                if (i == 5)
                                {
                                    printf ("Seat is full!\nThank you");
                                    break;

                                }

                                continue;

                            }

                            else
                            {

                                printf ("Thank you!\n");

                                flag = 2;

                            }

                        }

                    }


                    break;

                }

            }

        }

        break;

    case 2:

        printf("\nEconomy Class Seat\n");

        {

            int flag = 1;

            int i = 0;

            while (flag==1)

            {

                printf("Passenger %d: \n",i+1);

                printf ("Enter name:");

                scanf ("%s", &eco_seat[i].name);

                printf ("Enter e-mail:");

                scanf ("%s", &eco_seat[i].email);

                printf ("Enter Phone Number:");

                scanf ("%s", &eco_seat[i].number);
                system ("cls");

                i++;
                n1++;

                printf ("Continue?\n1.yes\n2.No\n");

                int flag_2;

                scanf ("%d", &flag_2);

                if (flag_2 == 1)
                {

                    if (i == 5)
                    {

                        printf("Seat is full! want business class seat?\n1.yes\n2.No\n");

                        int j;

                        scanf ("%d", &j);

                        if (j == 1)

                        {

                            printf("\nBusiness Class Seat\n");
                            {

                                int flag = 1;

                                int i = 0;

                                while (flag==1)

                                {

                                    printf("Passenger %d: \n",i+1);
                                    printf ("Enter name:");
                                    scanf ("%s", &bus_seat[i].name);
                                    printf ("Enter e-mail:");
                                    scanf ("%s", &bus_seat[i].email);
                                    printf ("Enter Phone Number:");
                                    scanf ("%s", &bus_seat[i].number);

                                    system ("cls");
                                    i++;
                                    n++;

                                    printf ("Continue?\n1.yes\n2.No\n");

                                    int flag_2;

                                    scanf ("%d", &flag_2);

                                    if (flag_2 == 1)
                                    {

                                        if (i == 3)
                                        {

                                            printf ("Seat is full!\nThank you");
                                            break;

                                        }

                                        continue;

                                    }

                                    else
                                    {

                                        printf ("Thank you!\n");

                                        flag = 2;


                                    }

                                }


                                break;
                            }

                        }

                        else
                        {
                            flag==2;

                            break;

                        }

                    }

                    continue;

                }

                else
                {

                    printf("\nBusiness Class Seat\n");
                    {

                        int flag = 1;

                        int i = 0;

                        while (flag==1)

                        {

                            printf("Passenger %d: \n",i+1);
                            printf ("Enter name:");
                            scanf ("%s", &bus_seat[i].name);
                            printf ("Enter e-mail:");
                            scanf ("%s", &bus_seat[i].email);
                            printf ("Enter Phone Number:");
                            scanf ("%s", &bus_seat[i].number);

                            system ("cls");

                            i++;
                            n++;

                            printf ("Continue?\n1.yes\n2.No\n");

                            int flag_2;

                            scanf ("%d", &flag_2);

                            if (flag_2 == 1)
                            {

                                if (i == 3)
                                {

                                    printf ("Seat is full!\nThank you");
                                    break;

                                }

                                continue;

                            }

                            else
                            {

                                printf ("Thank you!\n");

                                flag = 2;

                            }

                        }

                    }
                    break;
                }
            }
        }
        break;
    }

    printf ("\nBusiness class seat(s) information\n\n");

    for (int i = 0; i <n; i++)

    {
        printf ("Passenger No:%d\n", i+1);
        printf ("Name=%s\n", &bus_seat[i].name);
        printf ("Email=%s\n", &bus_seat[i].email);
        printf ("Number=%s\n", &bus_seat[i].number);
    }
    printf ("\nEconomy class seat(s) information\n\n");

    for(int i=0; i<n1; i++)
    {
        printf("Passenger No:%d\n",i+1);
        printf("Name=%s\n",&eco_seat[i].name);
        printf("Email=%s\n",&eco_seat[i].email);
        printf("Number=%s\n",&eco_seat[i].number);
    }

    return 0;
}
