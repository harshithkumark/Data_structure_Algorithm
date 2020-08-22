#include<stdio.h>
#include<stdlib.h>
int main()
{
	//the default method in which array is stored in stack
	int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};

	//array of pointer created in stack to each location array is created in heap

	//created in stack
	int *B[3];
	int i,j;

	//craeted in heap
	B[0]=(int *)malloc(4*sizeof(int));
	B[1]=(int *)malloc(4*sizeof(int));
	B[2]=(int *)malloc(4*sizeof(int));

	for(i=0;i<3;i++)
        {
                for(j=0;j<4;j++)
                        printf("%d\t",B[i][j]);
                printf("\n");
        }


	//double pointer **C both row and column are created in heap

	int **C;

	//array for rows
	C=(int **)malloc(3*sizeof(int));
	C[0]=(int *)malloc(4*sizeof(int));
	C[1]=(int *)malloc(4*sizeof(int));
	C[2]=(int *)malloc(4*sizeof(int));

	//int i,j;

	/*for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}*/
}
