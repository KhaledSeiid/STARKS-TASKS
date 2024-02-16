#include<stdio.h>
#define ll long long
int main()
{
	int arr[10];
	for(int i=0 ; i<10 ; i++)scanf("%d",&arr[i]);
	ll sum=0,prod=1;
	for(int i=0 ; i<10 ; i++)
	{
		if(arr[i]%2)prod*=arr[i];
		else sum+=arr[i];
	}
	printf("sum=%lld   ----   prod=%lld",sum,prod);
}