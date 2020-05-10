#include<stdio.h>

int main()
{
	int a[10];
	int sum ;
	printf("Enter %d element in array\n",8);
	int i;
	for(i = 0;i < 8;i++)
		scanf("%d",&a[i]);
		
	int prefixsum[10];
	int j;
	for(i = 0;i < 8;i++)
	{	sum = 0;
		for(j = 0;j <= i;j++)
		{
			sum = sum + a[j];
		}
		
		prefixsum[i] = sum; 
	}
	
	for(i = 0;i < 8 ;i++)
		printf("%d ",prefixsum[i]);
	printf("\n");
}
