#include <stdio.h>
int main()
{
    float s;
    printf("Enter Value Of Gross Salary:");
    scanf("%f",&s);
    printf("Net Salary is:%f\n",s+10*s/100-3*s/100);
    
}
