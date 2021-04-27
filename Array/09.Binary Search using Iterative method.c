#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nElements are\n");
	for (i = 0; i < arr.length; i++)
		printf("%d ", arr.A[i]);
}

void Append(struct Array* arr, int x)
{
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Insert(struct Array* arr, int index, int x)
{
	int i;
	if (index >= 0 && index <= arr->length)
	{
		for (i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = x;
		arr->length++;
	}
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int BinarySearch(struct Array arr, int key)
{
	int l, med, h;
	l = 0;
	h = arr.length = 1;
	
	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == arr.A[mid])
			return mid;
		else if (key < arr.A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

int main()
{
	struct Array arr = { {2,3,4,5,6},10,5 };

	printf("%d\n",	BinarySearch(arr, 2));
	Display(arr);

	return 0;
}