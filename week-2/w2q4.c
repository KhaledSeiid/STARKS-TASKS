#include<stdio.h>
int main()
{
	int vol;
	scanf("%d",&vol);
		int arr[3];
		int sum=0;
		for(int i=0; i<3 ;i++)scanf("%d",&arr[i]),sum+=arr[i];
		vol%=sum;
		for(int i=0; i<3 ;i++)
		{
			if(vol<arr[i])
			{
				switch(i)
				{
					case 0:printf("F");
					break;
					case 1:printf("M");
					break;
					default:printf("T");
					break;
				}
				break;
			}
			vol-=arr[i];
		}
}
