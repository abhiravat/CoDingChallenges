/*Using SquareRoot to check prime number*/

#include<stdio.h>
void main()
{
	int n,i,j,count=0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{	count=0;
		for(i=1;i*i<=n;++i)
		{
			if(j%i==0)
			{
				if(i*i==j)
					count++;
				else
					count+=2;
			}
		}
		if(count==2)
			printf(" %d PRIME\n",j);
		else
			printf("%d COMPOSITE\n",j);
	}
}
