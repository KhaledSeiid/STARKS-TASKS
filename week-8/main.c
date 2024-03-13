#include<stdio.h>
#include "bits_operation.h"
#define CALC(A,B,X) if( X == '+')printf("%.2f",(A)+(B));\
					else if( X== '-')printf("%.2f",(A)-(B));\
					else if( X == '*')printf("%.2f",(A)*(B));\
					else printf("%.2f",(A)/(B));
#define ARR_SUM(ARR,SIZE,VAR) for(int i=0 ; i<SIZE ; i++)VAR+=ARR[i];
int main()
{
		float a,b;
		char x;
		for(int i=0 ; i<4 ; i++)
		{
			scanf("%f %f %c",&a,&b,&x);
			fflush(stdin);
			CALC(a,b,x)
		}
		int arr[5]={1,2,3,4,5};
		int sum=0;
		ARR_SUM(arr,5,sum)
		printf("\n%d",sum);
	return 0;
}
