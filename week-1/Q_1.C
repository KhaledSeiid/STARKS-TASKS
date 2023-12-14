#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;float y;char c;
	printf("enter integer number:");
	scanf("%d",&x);
	printf("enter character:");
	fflush(stdin);
	scanf("%c",&c);
	printf("enter decimal number:");
	scanf("%f",&y);
	printf("%d\t%c\t%f",x,c,y);
}