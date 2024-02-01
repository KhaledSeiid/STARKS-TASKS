#include <stdio.h>
#include<stdbool.h>
#include"v.h"
 double a,b,c;
double smallest()
{
        return (a<b)?(a<c)? a: c:(b<c)? b: c;
}
int main()
{
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("%lf",smallest());
    return 0;
}
