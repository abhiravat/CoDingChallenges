/*Check whether a number is prime or not
 * */
#include<stdio.h>

void main()
{
	int n,i,count=0;
	printf("Enter num\n");
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{	count =0;
		for(i=1;i<=n;++i)
		{
			if (j%i==0)
				count++;
		}

	if(count==2)
		printf(" %d is PRIME\n",j);
	else
		printf("%d is COMPOSITTE\n",j);
	}
}
