//improved version of linear search using swap function when ever the element is found it is swaped with A[0] position element
#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[20];
	int length;
	int size;
};
void display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d\n",arr.A[i]);
}
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int linearSearch(struct Array *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    	if(key==arr->A[i])
	{	swap(&arr->A[i],&arr->A[0]);
		return i;
 	}
 }
	return -1;
}
int main()
{
	struct Array arr={{2,3,4,5,6},10,5};

	printf("element is ---> %d\n",linearSearch(&arr,4));
	display(arr);
}
