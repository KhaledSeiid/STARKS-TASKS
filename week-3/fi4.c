#include <stdio.h>
#include<stdbool.h>

bool perfect(int num)
{
	int sum=1;
	for(int i=2 ; i*i<=num ; i++)
    {
        if(i*i==num)sum+=i;
        else
        {
            if(num%i==0)sum+=i,sum+=(num/i);
        }
    }
    return sum==num;
}
int main()
{

    for(int i=1 ; i<=100 ; i++)
    {
        if(perfect(i))printf("%d   ",i);
    }
    return 0;
}
