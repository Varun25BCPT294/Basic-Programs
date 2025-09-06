#include <stdio.h>
int main()
{
    float p,c,m,t;
    printf("Enter Marks Of Physics Out Of 100:\n");
    scanf("%f",&p);
    printf("Enter Marks Of Chemistry Out Of 100:\n");
    scanf("%f",&c);
    printf("Enter Marks Of Maths Out Of 100:\n");
    scanf("%f",&m);
    printf("Total Of Three Subjects and Average Of Three Subjects is:%f ,%f\n",t=p+m+c,t/3);
}
