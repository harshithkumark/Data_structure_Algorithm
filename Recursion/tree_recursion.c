//Tree recurssion problem
#include<stdio.h>
int fun(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		fun(n-1);
		fun(n-1);
	}
}
void main()
{
	int n=3;
	fun(n);
}
