#include<stdio.h>
#define ll long long
int freq_arr[1000000+2];
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n; i++)scanf("%d",&arr[i]);
	///// assume any alement    >=0 && <=1e6
	for(int i=0 ; i<n; i++)
	{
		freq_arr[arr[i]]++;
	}
	for(int i=0 ; i<1000000+2; i++)if(freq_arr[i]==1)printf("%d  ",i);
	return 0;
}