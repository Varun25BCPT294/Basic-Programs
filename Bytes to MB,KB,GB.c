#include <stdio.h>

int main()
{
    float i;
    printf("Enter Value Of Size In Bytes:");
    scanf("%f",&i);
    printf("Value of %f Bytes In Kilobytes:%f\n",i,i/1000);
    printf("Value of %f Bytes In Megabytes:%f\n",i,i/1000000);
    printf("Value of %f Bytes In Gigabytes:%f\n",i,i/1000000000);
    
}