#include "headerSort.hpp"
#define ARRAY_SIZE 10
#define ZERO 0

int main(){
    int arr[ARRAY_SIZE];
    cout << "Tarea 2. Emmanuel Chavarria Solis" << endl<<endl;

    //Bubble sorting array
    cout<<"Bubble Sorting array"<<endl;
    shuffle_array(arr);
    cout<<"Array before sorting"<<endl;
    print_array(arr);
    bubbleSort(arr,ARRAY_SIZE);
    cout<<"Array Bubble sorted:"<<endl;
    print_array(arr);
    cout<<endl;

    //Selection sorting array
    cout<<"Selection Sorting array"<<endl;
    shuffle_array(arr);
    cout<<"Array before sorting"<<endl;
    print_array(arr);
    selectionSort(arr,ARRAY_SIZE);
    cout<<"Array selection sorted:"<<endl;
    print_array(arr);
    cout<<endl;

    //Insertion sorting array
    cout<<"Insertion Sorting array"<<endl;
    shuffle_array(arr);
    cout<<"Array before sorting"<<endl;
    print_array(arr);
    insertionSort(arr,ARRAY_SIZE);
    cout<<"Array insertion sorted:"<<endl;
    print_array(arr);
    cout<<endl;

    //Quick sorting array
    cout<<"Quick Sorting array"<<endl;
    shuffle_array(arr);
    cout<<"Array before sorting"<<endl;
    print_array(arr);
    quickSort(arr,ZERO,ARRAY_SIZE);
    cout<<"Array quick sorted:"<<endl;
    print_array(arr);
    cout<<endl;
}