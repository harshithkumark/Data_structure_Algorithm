//to demonstrate array declaration and printing the address of array
#include<stdio.h>
int main()
{
		int A[5];
		int B[5]={1,2,3,4,5};
		int C[10]={2,3,4};
		int D[10]={0};
		int E[]={1,2,3,4,5,6};



		int i;
		for(i=0;i<5;i++)
		printf("%u \n",&A[i]);
}
