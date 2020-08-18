//tail-recurssion problem to print numbers
#include<stdio.h>
#include<time.h>
int fun(int n)
{
	if(n < 0)
	{
		return 0;
	}
	else
	{
		fun(n-1);
		printf("%d\n",n);
	}
}
int main()
{
	clock_t t;
	int n=100;
	t=clock();
	fun(n);
	t=clock()-t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("fun() took %f seconds to execute \n", time_taken);
}
//Time taken is O(n)
//Space taken is O(n)
