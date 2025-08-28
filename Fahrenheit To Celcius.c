#include <stdio.h>

int main()
{
    float i;
    printf("Enter Value Of Temperature In Fahrenheit:");
    scanf("%f",&i);
    printf("Value of %f Fahrenheit In Celcius:%f\n",i,(i-32)*5/9);
    
}