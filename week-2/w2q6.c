#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=0;
	while(a<=b)
    {
        res++;
        a*=3,b*=2;
    }
    printf("%d",res);
}
