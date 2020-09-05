//program to insert an element at the given position end of an array
#include<stdio.h>
#include<stdlib.h>
struct Array
{
        int A[20];
        int length;
        int size;
};
void insert(struct Array *arr,int index,int x)
{
	int i;
	if(index>=0 && index <=arr->length)
	{
		for(i=arr->length;i>index;i--)
			arr->A[i]=arr->A[i-1];
		arr->A[index]=x;
		arr->length++;
	}
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
	insert(&arr,5,10);
	display(arr);
}
