// Based on - 1. Comparision
//            2. Swaping

// Defination - In this sorting technique we will choose one element at a time and insert it into its correct position in left side. to findout the correct position of an element compare it with another element of the list.

#include <stdio.h>

void main()
{
    int abc[10], i, j, m, key, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &abc[i]);
    }

    // loop for insertion sort
    //we are taking i=1 bc we are comparing second element with first one
    for (i = 1; i < n; i++)  
    {
        //Storing value at second position as key
        key = abc[i];   
        //reducing the index of j by one, to compare the value at abc[i] with value at abc[i-1] 
        j = i - 1;
        // if value at abc[i-1]>abc[i] then we have to swap 
        while (j >= 0 && abc[j] > key)
        {
            
            abc[j + 1] = abc[j];
            j = j - 1;
        }
        abc[j + 1] = key;
    }

    // printing array

    printf("the sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", abc[i]);
        printf("\n");
    }
    // getch();

}
