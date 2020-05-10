#include<stdio.h>
#include<math.h>

void prime_factorization(long x)
{
	long i;
	long c;
	c=x;
	
	while((c%2)==0)
	{
		printf("%ld\n",2l);
		c=c/2;
	}
	i=3;
	while( i*i <= (c + 1))
	{
		if((c%i)==0)
		{
			printf("%ld\n",i);
			c=c/i;
			
		}else
		{
			i=i+2;
		}
	}
	if(c>1)
		printf("%ld\n",c);
}

int main()
{
	prime_factorization(32);
	return 0;
}
