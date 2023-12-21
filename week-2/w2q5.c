#include<stdio.h>
#include<stdbool.h>
int a,b,c;
bool check(int num)
{
	int sum=0;
	while(num)
	{
		sum+=(num%10);
		num/=10;
	}
	if(sum>=b&&sum<=c)return 1;
	else
		return 0;
}
int main()
{
	
	scanf("%d%d%d",&a,&b,&c);
	int res=0;
	for(int i=1 ; i<=a ; i++)
	{
		if(check(i))res+=i;
	}
	printf("%d",res);
}