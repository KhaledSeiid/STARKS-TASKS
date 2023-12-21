#include<stdio.h>
int main ()
{
	printf("               ---------------\n               |             |\n               |   WELCOME   |\n               |             |\n               ---------------\n");
	int x=1;
	while(x)
	{
		printf("for new operation enter: 1\nfor exist program enter: 0\n---->>:");
		scanf("%d",&x);
		if(x==1)
		{
			int a,b;
			printf("enter two values:");
			scanf("%d%d",&a,&b);
			printf("%d\n",a+b);
		}
		else if(x!=0)printf("invalid option!\n");
	}
}