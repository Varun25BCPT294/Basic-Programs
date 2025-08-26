#include <stdio.h>

int main()
{
    //ADDING OF TWO NUMBERS
    printf("Enter Values For Adding:\n");
    int a,b;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Addition of a and b is:%d\n",a+b);
    
    //SUBTRACTNG OF TWO NUMBERS
    printf("Enter Values For Subtracting:\n");
    int c,d;
    printf("Enter value of c:");
    scanf("%d", &c);
    printf("Enter value of d:");
    scanf("%d", &d);
    printf("Subtraction of c and d is:%d\n",c-d);
    
    //MULTIPLYING OF TWO NUMBERS
    printf("Enter Values For Multiplying:\n");
    int e,f;
    printf("Enter value of e:");
    scanf("%d", &e);
    printf("Enter value of f:");
    scanf("%d", &f);
    printf("Multiplication of e and f is:%d\n",e*f);
    
    //DIVIDING OF TWO NUMBERS
    printf("Enter Values For Dividing:\n");
    float g,h;
    printf("Enter value of g:");
    scanf("%f", &g);
    printf("Enter value of h:");
    scanf("%f", &h);
    printf("Division of a and b is:%f",g/h);
}


