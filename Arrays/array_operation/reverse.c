#include<stdio.h>
#include<stdlib.h>
struct Array
{
        int A[20];
        int length;
        int size;
};
void Reverse(struct Array *arr)
{
	int *B;
	int i,j;
	B=(int *)malloc(arr->length*sizeof(int));
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	B[j]=arr->A[i];
	for(i=0;i<arr->length;i++)
	arr->A[i]=B[i];
}


void display(struct Array arr)
{
        int i;
        printf("\nElements are\n");
        for(i=0;i<arr.length;i++)
                printf("%d\n",arr.A[i]);
}
int main()

{
        struct Array arr={{2,3,4,5,6},10,5};
        Reverse(&arr);
        display(arr);
}


