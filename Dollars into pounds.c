#include <stdio.h>

int main()
{
    float i;
    printf("Enter Value Of Currency In Dollar:");
    scanf("%f",&i);
    printf("Value of %f Dollar In Pounds:%f ",i,i*48/70);
}