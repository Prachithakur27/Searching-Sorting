#include<stdio.h>

int Linear(int linear[],int size,int data)
{
	int i=0;
	
	for(i=0;i<size;i++)
	{
		if(linear[i] == data)
		{
			printf("Data present at index : %d\n",i);
			break;
		}
	}
	
	if(i == size)
	{
		printf("Data not present \n");
	}	
}

int main()
{
	int n=0,data=0;
	
	printf("Enter array size : ");
	scanf("%d",&n);

	int linear[n];
	
	printf("Enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&linear[i]);
	}

	printf("Array elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",linear[i]);
	}

	printf("\n");

	printf("Enter data to search : ");
	scanf("%d",&data);

	Linear(linear,n,data);

	return 0;
}
