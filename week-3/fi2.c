#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define u unsigned
#define ll long long
u ll int fibo(u int num)
{
    u ll int x=0,y=1;
    for(int i=3 ; i<=num ;i++)
    {
       u ll int last=y;
       y+=x;
       x=last;
    }
    return y;
}
int main()
{
   u int n;
   scanf("%lu",&n);
   printf("%llu",fibo(n));
    return 0;
}
