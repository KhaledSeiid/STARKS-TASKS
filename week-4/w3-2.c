#include<stdio.h>
int main()
{
	int arr[5][5];
	for(int i= 0; i<5 ; i++)
	{
		for(int j=0 ; j<5  ;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int row_sum=0,col_sum=0;
	for(int i= 0; i<5 ; i++)
	{
		for(int j=0 ; j<5  ;j++)
		{
			row_sum+=arr[i][j];
		}
		printf("%d  ",row_sum);
		row_sum=0;
	}
	printf("\n");
	for(int i= 0; i<5 ; i++)
	{
		for(int j=0 ; j<5  ;j++)
		{
			col_sum+=arr[j][i];
		}
		printf("%d  ",col_sum);
		col_sum=0;
	}
	return 0;
}