//the programe show us how to increase the array size it can only be done dynamically using malloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,*q,i;
	p=(int *)malloc(5*sizeof(int));
	p[0]=3;
	p[1]=5;
	p[2]=7;
	p[3]=9;
	p[4]=11;

	 q=(int *)malloc(10*sizeof(int));
        for(i=0;i<5;i++)
        q[i]=p[i];

	free(p);

	//printf("%ul",&q);
	for(i=0;i<5;i++)
		printf("%d\n",q[i]);

}
