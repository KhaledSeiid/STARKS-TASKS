#include<stdio.h>
#include<string.h>
#define ll long long
int get_len(char str[100])
{
	int i=0;
	while(str[i]!='\0')i++;
	return i;
}
int main()
{
	char str1[100];
	gets(str1);
	char str2[100];
	gets(str2);
	if(get_len(str1)!=get_len(str2))
	{
		printf("NOT EQUAL");
		return 0;
	}
	for(int i=0 ; i<get_len(str1); i++)
	{
			if(str1[i]!=str2[i])
			{
				printf("NOT EQUAL");return 0;
			}
	}
	printf("EQUAL");
	return 0;
}