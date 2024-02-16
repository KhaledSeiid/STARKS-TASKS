#include<stdio.h>
#include<string.h>
#define ll long long
int main()
{
	char str[100];
	gets(str);
	char ch;
	fflush(stdin);
	scanf("%c",&ch);
	for(int i=0 ; i<strlen(str); i++)if(str[i]==' ')str[i]=ch;
	printf("%s",str);
	return 0;
}