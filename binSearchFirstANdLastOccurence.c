//Binary Search Application finding out the first and last occurences of an element

#include<stdio.h>

int binarySearchFirstOccurence(int a[], int s, int k)
{
	int low = 0;
	int high = s-1;
	int result = -1;
	int mid;
	
	while(low <= high)
	{
		mid = low + (high - low + 1)/2;
		
		if(k == a[mid])
		{
			result = mid;
			high = mid - 1;
		}else if(k < a[mid])
			high = mid - 1;
			else
				low = mid + 1;
	}
	return result;
}
int binarySearchLastOccurence(int a[], int s, int k)
{
	int low = 0;
	int high = s-1;
	int result = -1;
	int mid;
	while(low <= high)
	{
		mid = low + (high - low + 1)/2;
		
		if(k == a[mid])
		{
			result = mid;
			low = mid + 1;
		}else if(k < a[mid])
			high = mid - 1;
			else
				low = mid + 1;
	}
	return result;
}



int main()
{
	int i;
	int s;
	
	printf("Enter the size of the array\n");
	scanf("%d",&s);
	
	int a[s];
	int k;
	
	printf("Enter %d element in the array\n",s);

	for(i=0; i<s; i++)
		scanf("%d",&a[i]);

	printf("Enter the element to be searched for first and last occurence\n");
	scanf("%d",&k);
	
	int firstOccurence = binarySearchFirstOccurence(a,s,k);
	int lastOccurence = binarySearchLastOccurence(a,s,k);
	
	printf("The first occurence is at position %d \n",firstOccurence);
	printf("The last occurence is at position %d \n",lastOccurence);
	
	printf("Total number of occurence of the element %d is %d\n",k, lastOccurence - firstOccurence + 1);
}
