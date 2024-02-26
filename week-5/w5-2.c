#include <stdio.h>
#include <stdlib.h>
#define ll long long
ll fact(int x)
{
    if(x<1)return 1;
    else
    return x*fact(x-1);
}
ll (*ptr_fact_fun)(int x);
int main()
{
   int n;
   scanf("%d",&n);
   ptr_fact_fun=fact;
   printf("%d",ptr_fact_fun(n));
    return 0;
}
