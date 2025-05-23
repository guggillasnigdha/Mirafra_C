#include<stdio.h>
int partition(int arr[],int low,int high);
void swap(int *a,int *b);
void quicksort(int arr[],int low,int high);

int main()
{
	int arr[6]={5,2,9,1,5,6};
	printf("Array before sorting:\n");
	for(int i=0;i<6;i++)
		printf("%d ",arr[i]);
	quicksort(arr,0,5);
	printf("Array after sorting:");
	for(int i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{
	int pivot=arr[high],i=low-1,j;
	for(j=0;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
