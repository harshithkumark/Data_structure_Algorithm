//recursive function to calculate sum of n natural numbers
//recursive function to calculate sum of n natural can costly because it uses the stack to  store the value and add up extra space
//The time complexity is O(n)
//Spcae complexity is O(n)
#include<stdio.h>
#include<time.h>
int sum1(int n);
int sum2(int n);
//finding sum using recursion
int sum(int n)
{
	if(n==0)
		return 0;
	return sum(n-1)+n;
}
//finding sum using formula
int sum1(int n)
{
	return n*(n+1)/2;
}
//finding sum using for loop
int sum2(int n)
{
	int s=0;
	int i;
	for(i=1;i<n;i++)
	s=s+i;
	return s;
}
int main()
{
	int r=5,a;
	clock_t t;
	t = clock();
	a=sum(5);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
	printf("%d\n",a);
	printf("fun() took %f seconds to execute \n", time_taken);
	//printf("\n");
}
