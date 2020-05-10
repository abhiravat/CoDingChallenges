#include<stdio.h>

int findRotationCount(int a[],int s)
{
	int low = 0;
	int high = s - 1;
	int mid;
	int next;
	int prev;
	while(low <= high)
	{	//case 1
		if(a[low] <= a[high])
			return low;
		mid = (low + high)/2;
		next = (mid + 1)% s;
		prev = (mid + s -1)%s;
		
		if(a[mid] <= a[next] && a[mid] <= a[prev])
			return mid;
		else if(a[mid] <= a[high] )
				high = mid - 1;
		else if(a[mid] >= a[low])
			low = mid + 1; 
	}
	return -1;
}

int main()
{
	int i;
	int s;
	
	printf("Enter the size of the array\n");
	scanf("%d",&s);
	
	int a[s];
	
	printf("Enter %d element in the array\n",s);

	for(i=0; i<s; i++)
		scanf("%d",&a[i]);
	int count = findRotationCount(a,s);
	
	printf("The number of times the array is rotated : is %d \n",count);
}
