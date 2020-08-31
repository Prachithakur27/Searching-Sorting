// insertion sort
// Time complexity -> bestcase = O(n), Worstcase = O(n^2)

#include<stdio.h>

void Insertion(int arr[],int size)
{
	int i,j,temp=0;
	
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j = i-1;
	
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = temp;		
	}	

	printf("Sorted array is :");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}	
 
int main()
{
	int n=0,data=0;
	
	printf("Enter array size : ");
	scanf("%d",&n);

	int arr[n];
	
	printf("Enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\n");

	Insertion(arr,n);

	return 0;
}
