#include<stdio.h>
void main()
{
	int number,i,j;
	int A[20];
	int sum=10;
	printf("Enter the array size--> ");
	scanf("%d",&number);

	printf("Enter the array elements\n");
	for(i=0;i<number;i++)
	scanf("%d",&A[i]);

	for(i=0;i<number-1;i++)
	{
		for(j=i+1;j<number;j++)
		{
			if(A[i]+A[j]==sum)
			printf("%d + %d = %d\n",A[i],A[j],sum);
		}
	}
}
