/* hidden
two or more lines
*/

//hidden one line

#include<stdio.h>
#define KMS_PER_MILE 1.609

int main(void)
{
    float miles,kms;

    printf("Enter the distance in miles: ");
    scanf("%f",&miles);

    kms = KMS_PER_MILE * miles;

    printf("That equals %f km.\n",kms);
}
