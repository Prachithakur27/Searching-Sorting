//Selection sort

#include<stdio.h>

void Selection(int arr[],int n)
{
	int i,j,min,temp;

	for(i=0;i<n-1;i++)			//for pass
	{
		min = i;
		
		for(j=i+1;j<n;j++)		//for swap
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	
	printf("Sorted array is : ");
	for(i=0;i<n;i++)
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

	Selection(arr,n);

	return 0;
}
