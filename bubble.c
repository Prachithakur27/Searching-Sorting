//bubble sort -> o(n^2)

#include<stdio.h>

int Bubble(int arr[],int n)
{
	int i,pass;

	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	printf("sorted array is : ");
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

	int bubble[n];
	
	printf("Enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bubble[i]);
	}

	printf("Array elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",bubble[i]);
	}

	printf("\n");

	Bubble(bubble,n);

	return 0;
}
