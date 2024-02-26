#include <stdio.h>
#include <stdlib.h>
#define ll long long
void sort(int arr[],int x)
{
    for(int i=1 ; i<x ; i++)
    {
        int val=arr[i];
        int j=i-1;
        while(j>=0&& val>arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
}

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0 ; i<n ; i++)scanf("%d",&arr[i]);
    sort(arr,n);
    for(int i=0 ; i<n ; i++)printf("%d\n",arr[i]);
    return 0;
}
