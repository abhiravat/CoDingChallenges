#include<stdio.h>

int binarySearch(int arr[], int left,int right, int key)
{
	 if (left <= right) 
    {
        int mid = left + (right - left) / 2;            
        if (arr[mid] == key)
            return mid;                   
        else if (key < arr[mid])
        {
            
            return binarySearch(arr, left, mid-1, key);        
        }
        else
        {
             
             return binarySearch(arr, mid+1, right, key);     
        }
   }
   else
        return 0;
}

int main()
{
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	
	int arr[size];
	
	int i;
	
	printf("Enter %d element in the array\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	int key;
	printf("Enter the number to search in the array");
	scanf("%d",&key);
	
	int position;
	
	position=binarySearch(arr,0,size,key);
	if(position==1)
		printf("Key is not present in the array\n");
	else
		printf("The key is present at positon %d\n",position+1);
}
