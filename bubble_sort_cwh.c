// Bubble sort using c

#include <stdio.h>
int i, j, swap;
int isSorted = 0;

void printArray(int *A, int n)
{

	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void bubbleSort(int *A, int n)
{
	for (i = 0; i < n - 1; i++) //for number of paases
	{
		printf("Working on pass number %d\n", i + 1);

		for (j = 0; j < n - 1 - i; j++) //for comparisions in each pass
		{
			if (A[j] > A[j + 1])
			{
				swap = A[j];
				A[j] = A[j + 1];
				A[j + 1] = swap;
			}
		}
	}
}
//function for adaptive array, if array is already sorted
void bubbleSortAdaptive(int *A, int n)
{
	for (i = 0; i < n - 1; i++) //for number of paases
	{
		printf("Working on pass number %d\n", i + 1);
		isSorted = 1;
		for (j = 0; j < n - 1 - i; j++) //for comparisions in each pass
		{
			if (A[j] > A[j + 1])
			{
				swap = A[j];
				A[j] = A[j + 1];
				A[j + 1] = swap;
				isSorted = 0;
			}
		}
		if (isSorted)
		{
			return;
		}
	}
}

int main()
{
	//	int A1[] = {12,84,13,7,89,22};
	int A[] = {1, 2, 3, 4, 5, 6};
	int n = 6;
	printArray(A, n); //printing the array before sorting
	bubbleSort(A, n); //function to sort the array
	printArray(A, n);
	bubbleSortAdaptive(A, n);
	printArray(A, n); //printing the array after sorting

	return 0;
}
