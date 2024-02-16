#include<stdio.h>
#include<string.h>
#define ll long long
int freq_arr[26];
int main()
{
	char str[100];
	gets(str);
	char ch;
	fflush(stdin);
	scanf("%c",&ch);
	for(int i=0 ; i<strlen(str); i++)if(str[i]!=' ')freq_arr[str[i]-'a']++;
	printf("%d",freq_arr[ch-'a']);
	return 0;
}