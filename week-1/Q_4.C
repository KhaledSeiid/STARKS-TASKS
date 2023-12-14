#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("enter two values:");
    scanf("%f%f",&a,&b);
    printf("addition:%.2f\nsubtraction:%.2f\nmultiplication:%.2f\ndivision:%.2f",a+b,a-b,a*b,a/b);
    return 0;
} 
