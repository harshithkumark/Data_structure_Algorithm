//to print fibonacci series using recursion
#include<stdio.h>
int fibonacci(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-2)+fibonacci(n-1);
}
int main()
{
	printf("%d\n",fibonacci(1));
}
