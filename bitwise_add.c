#include<stdio.h>

int main()
{
	unsigned char n1=100;
	unsigned char n2=55;
	while(n2!=0)
	{
		unsigned char carry= n1 & n2;
		n1=n1^n2;
		n2=carry<<1;
	}
	printf("%u\n",n1);
}
