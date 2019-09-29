/*
	Prime Number using Seive Of Erasthosthenes
*/

#include<stdio.h>

void Sieve(int n)
{
	int isPrime[n+1];
	for(int i=0;i<=n;++i)
	{
		isPrime[i]=1;
	}
	isPrime[0]=0;
	isPrime[1]=0;
	for(int i=2;i*i<=n;++i)
	{
		if(isPrime[i]==1)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				isPrime[j]=0;
			}
		}
		
	
	}
	for(int i=2;i<=n;i++)
	{
		if(isPrime[i]==1)
			printf("%d Prime\n",i);
		else
			printf("%d Compostite\n",i);
	}
	
	
	
}
void main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	Sieve(n);
}
