#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#define u unsigned
#define ll long long
void binary(int num)
{
	char res[100]="";
	int i=0;
    while(num)
    {
        if(num%2)res[i]='1';
        else
            res[i]='0';
        num/=2;
        i++;
    }
	strrev(res);
	i=0;
	while(res[i])printf("%c",res[i]),i++;;
}
int main()
{
  int n;
   scanf("%i",&n);
  binary(n);
    return 0;
}
