#include<stdio.h>
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1 ; i<=n*4 ; i++)
	{
		if(!(i%4))printf("PUM\n");
		else
			printf("%d ",i);
		
		
		
	}
}