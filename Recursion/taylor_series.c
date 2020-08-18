//A Taylor series is a series expansion of a function about a point. A one-dimensional Taylor series is an expansion of a real function 
//(n+1)th term of taylor series is given by (x^n)/n! , where series starts with 1 and it goes upto n terms
#include<stdio.h>
double e(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==0)
		return 1;
	r = e(x,n-1);
	p=p*x;
	f=f*n;
	return r+p/f;
}
int main()
{
	printf("%lf\n",e(4,12));

}

