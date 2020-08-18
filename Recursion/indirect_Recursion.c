// incdirect recurssion is also known as circular recussion in which a function is called inside another function
#include<stdio.h>
void funB(int n);
void funA(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		funB(n-1);
	}
}
void funB(int n)
{
	if(n > 1)
	{
		printf("%d\n",n);
		funA(n/2);
	}
}
void main()
{
	funA(20);
}
