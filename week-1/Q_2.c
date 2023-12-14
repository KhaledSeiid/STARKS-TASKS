#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("enter two decimal number:");
    float x1,x2;
    scanf("%f%f",&x1,&x2);
    printf("before swap:%0.2f\t%0.2f\n",x1,x2);
    x1 +=x2;
    x2=x1-x2;
    x1=x1-x2;
    printf("after swap:%0.2f \t%0.2f\n",x1,x2);
}
