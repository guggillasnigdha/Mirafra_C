#include<stdio.h>


int square_root(int n)
{
	int low=0,high=n;

	while(low<=high)
	{
		int mid=(low+high)/2;
		if((mid*mid)<n)
		{
			low=mid+1;
		}
		else if((mid*mid)>n)
		{
			high=mid-1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int n=48;
	int res=square_root(n);
	if(res!=-1)
		printf("Square root of given number %d is %d\n",n,res);
	else
		printf("Not sqaure root number\n");
	return 0;
}
