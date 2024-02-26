#include <stdio.h>
#include <stdlib.h>
#define ll long long
void fun(int x,int y,int *ptr_sum,int *ptr_diff,int *ptr_prod)
{
	*ptr_sum=x+y;
	*ptr_diff=x-y;
	*ptr_prod=x*y;
}
int main()
{
	int sum,diff,prod;
  int x,y;
  scanf("%d%d",&x,&y);
  fun(x,y,&sum,&diff,&prod);
  printf("%d \t%d\t%d",sum,diff,prod);
    return 0;
}
