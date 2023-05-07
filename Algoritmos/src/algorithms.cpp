#include "headerSort.hpp"
#define ARRAY_SIZE 10
#define ZERO 0

void print_array(int arr[]){
    for(int i=0;i<ARRAY_SIZE;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void shuffle_array(int arr[]){
    srand(time(NULL));
    for(int i=0;i<ARRAY_SIZE;i++){
        arr[i] = rand()%100;
    }
}

void bubbleSort(int arr[],int n){
    int temp=0;
    //Bubble sort every element
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //Swap elements
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    int min_index=0;
    int temp=0;
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element
        min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap minimum element with the first element
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    int present_value, index_to_compare;
    for (int i = 1; i < n; i++) {
        present_value = arr[i];
        index_to_compare = i - 1;
        // Compare current element with previous elements and shift elements to the right until a smaller element is found
        while (index_to_compare >= 0 && arr[index_to_compare] > present_value) {
            arr[index_to_compare + 1] = arr[index_to_compare];
            index_to_compare = index_to_compare - 1;
        }
        // Insert the current element in the correct position 
        arr[index_to_compare + 1] = present_value;
    }
}

void quickSort(int arr[], int low, int high) {
    int temp=0;
    // Base case for recursion
    if (low < high) {
        // Choose the last element of the array as the pivot
        int pivot = arr[high];
        int local_low = low - 1;
        // Loop through the array from the lowest index
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                //First local low increment to 0, index inside boundary
                local_low++;
                temp = arr[local_low];
                arr[local_low] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[local_low+1];
        arr[local_low+1] = arr[high];
        arr[high] = temp;
        int index_after_partition = local_low + 1;
        // Recursively call quickSort on the left and right partitions of the array
        quickSort(arr, low, index_after_partition-1);
        quickSort(arr, index_after_partition+1, high);
    }
}