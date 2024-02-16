#include<stdio.h>
#include<string.h>
#define ll long long
int get_len(char str[200])
{
	int i=0;
	while(str[i]!='\0')i++;
	return i;
}
int main()
{
	char str1[100];
	scanf("%s",&str1);
	char str2[50];
	scanf("%s",&str2);
	int i=get_len(str1);
	str1[i]=' ';
	i++;
	int j=0;
	while(str2[j])
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);
	return 0;
}