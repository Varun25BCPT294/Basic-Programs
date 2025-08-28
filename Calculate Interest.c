#include <stdio.h>

int main()
{
    float p,r,n;
    printf("Enter Value Of p:\n");
    scanf("%f",&p);
    printf("Enter Value Of r:\n");
    scanf("%f",&r);
    printf("Enter Value Of n:\n");
    scanf("%f",&n);
    printf("Value of Interest:%f\n",p*r*n/100);
}