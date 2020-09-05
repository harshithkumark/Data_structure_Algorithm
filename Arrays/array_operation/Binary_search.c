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
int Binary_Search(struct Array arr,int key)
{
	int l,h,mid;
	l=0;
	h=arr.length-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr.A[mid])
			return mid;
		else if(key<arr.A[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
int main()
{
	struct Array arr={{2,3,4,5,6},10,5};

	printf("%d\n",Binary_Search(arr,5));
	display(arr);
}

