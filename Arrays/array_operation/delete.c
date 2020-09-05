#include<stdio.h>

struct Array
{
        int A[20];
        int length;
        int size;
};
void delete(struct Array *arr,int index)
{
        int x=0;
	int i;
	if(index>=0 && index<=arr->length)
	{
		x=arr->A[index];
		 for(i=index;i<arr->length-1;i++)
		arr->A[i]=arr->A[i+1];
		arr->length--;
		return x;
	}
	return 0;
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

	delete(&arr,0);
	display(arr);
}

