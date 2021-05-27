#include<stdio.h>

int i,j,key,n;

void insertionSort(int arr[],int n){
    for(i=0 ;i<n;i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j =j-1;

        }
        arr[j+1] = key;

    }


}
//Function to print the array
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}



//Drivers code




int main(){
    int arr[] = {23,45,12,34,23};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,n);
    printArray(arr,n);

    return 0;

}


