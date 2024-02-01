#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int reverse_num(int num)
{
    int x=num;
    int len=0;
    while(x)
    {
        len++;
        x/=10;
    }
    int y=pow(10,len-1);
    int res=0;
    for(int i=0 ; i<len ; i++)
    {
        res+=(num%10)*y;
        num/=10;
        y/=10;
    }
    return res;
}
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",reverse_num(n));
    return 0;
}