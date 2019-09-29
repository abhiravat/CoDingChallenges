#include<stdio.h>
void main()
{
	int a,b,gcd;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	int m=a>b?b:a;
	
	for(int i=m;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
				break;
		}
			
	}
	printf("The gcd is %d\n",gcd);
}
