#include <stdio.h>
#include<stdbool.h>

bool is_prime(int num)
{
    if(num<2)return 0;
	for(int i=2 ; i*i<=num ; i++)
    {
        if(num%i==0)return 0;
    }
    return 1 ;
}
int main()
{
   int n;
   scanf("%i",&n);
  if(is_prime(n))printf("yes\n");
  else
    printf("no\n");
    return 0;
}
