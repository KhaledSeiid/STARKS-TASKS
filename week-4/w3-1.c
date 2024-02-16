#include<stdio.h>
int main()
{
	int arr[10]={0};
	int num;
	scanf("%d",&num);
	while(num)
	{
		arr[num%10]++;
		num/=10;
	}
	for(int i=0 ; i<10 ; i++)
	{
		if(arr[i]>1)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}