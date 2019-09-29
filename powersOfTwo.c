/*
Check if a number is power of two or not?
for example:
4,8,16.. are power of two 
*/
/*Counting The number of one present in the binary representation of the number*/

#include<stdio.h>



void main()
{
	int n;	
	int count=0;
	printf("Enter the number");
	scanf("%d",&n);
	int c= n&(n-1)?1:0;
	if(!c)
		printf("Yes it's power of two\n");
	else
		printf("No");
	
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	printf("The number of 1 present is:%d\n",count);
}



