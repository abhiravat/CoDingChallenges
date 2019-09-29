//Euclid's Algorithm to find the GCD of two numbers

#include<stdio.h>

int euclidGCD(int a,int b)
{
	if(b==0)
		return a;
	else
		return euclidGCD(b,a%b);
}

void main()
{
	int a,b,gcd;
	printf("Enter two number \n");
	scanf("%d %d",&a,&b);
	
	gcd=euclidGCD(a,b);
	
	printf("GCD is %d \n",gcd);
}
