//recursion programe to calclate power
#include<stdio.h>
//#include<math.h>
int power(int m,int n)
{
	if(n==0)
		return 1;
	return power(m,n-1)*m;
}
//if the given number is even number
int power1(int m,int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
		return power1(m*m,n/2);
	return m*power1(m*m,(n-1)/2);
}
void main()
{
	int m=10,n=3,r;
	r=power(m,n);
	printf("%d\n",r);
}
