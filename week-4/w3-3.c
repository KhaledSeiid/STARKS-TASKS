#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ; i++)scanf("%d",&arr[i]);
	int mn=1e9,mx=-1e9;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]>mx)mx=arr[i];
		if(arr[i]<mn)mn=arr[i];
	}
	printf("min=%d   ----   max=%d",mn,mx);
}