

#include<stdio.h>

int main()
{
	char x[2];

	if((&x[1]-&x[0])<0)
	{
		printf("DOWN STACK\n");
	}
	else
	{
		printf("UP STACK\n");
	}
}
