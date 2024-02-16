#include<stdio.h>
#define ll long long
int get_len(int num)
{
	int res=0;
	while(num)res++,num/=10;
		return res;
}
int main()
{
	int num;
	scanf("%d",&num);
	int len=get_len(num);
	int arr[len/2];
	for(int i=0 ; i<len/2 ; i++)
	{
		arr[i]=num%10;
		num/=10;
	}
	if(len%2)num/=10;
	for(int i=(len/2)-1 ; i>=0 ; i--)
	{
		if(num%10!=arr[i])
		{
			printf("num is not palindrome\n");
			return 0;
		}
		num/=10;
	}
	printf("num is palindrome\n");
	return 0;
}