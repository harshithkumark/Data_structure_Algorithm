//factorial problem to be solved using recursion function
#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return factorial(n-1)*n;
	}
}
void main()
{
	int n=10,r;
	r=factorial(n);
	printf("%d\n",r);
}

