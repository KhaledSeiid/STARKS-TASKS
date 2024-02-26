#include <stdio.h>
#include <stdlib.h>
#define ll long long
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0 ; i<n ; i++)scanf("%d",&arr[i]);
    for(int i=0 ; i<n ; i++)printf("%d\n",*(arr+n-1-i));
    return 0;
}
