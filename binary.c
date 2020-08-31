// Binary search 

#include<stdio.h>

int Binary(int binary[],int size,int data)
{
	int l = binary[0];
	int h = binary[size-1];	
	int mid;
	
	while(l<=h)
	{
		 mid = (l+h)/2;
	
		if(data == binary[mid])
		{
			return mid;
		}
		else if(data>binary[mid])
		{
			l = mid+1;
		}
		else if(data<binary[mid])
		{
			h = mid-1;
		}
	}
	return -1;
}

int main()
{
	int n=0,data=0,index;
	
	printf("Enter array size : ");
	scanf("%d",&n);

	int binary[n];
	
	printf("Enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&binary[i]);
	}

	printf("Array elements are : ");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",binary[i]);
	}

	printf("\n");

	printf("Enter data to search : ");
	scanf("%d",&data);

	index = Binary(binary,n,data);
	printf("data found at index : %d\n",index);

	return 0;
}
