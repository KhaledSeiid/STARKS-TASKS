#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d",&a))
	{
		scanf("%d",&b);
		if(a>b)
		{
			a+=b;
			b=a-b;
			a=a-b;
		}
		if(a<=0)break;
		for(int i=a ; i<=b ; i++)printf("%d ",i);
		a--;
		printf("sum=%d\n",(b*(b+1))/2-(a*(a+1))/2);
		
	}
	
	
}
