// Bubble sort using functions

#include <stdio.h>

int arr[10], i, j, swap, n;
void printArray()
{
	printf("Array before sorting is: ");

	for (i = 0; i < n; i++)
	{

		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubbleSort()
{
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{

				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
}

int main()
{
	printf("Enter no of elements: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printArray();
	bubbleSort();
	printArray();

	return 0;
}
